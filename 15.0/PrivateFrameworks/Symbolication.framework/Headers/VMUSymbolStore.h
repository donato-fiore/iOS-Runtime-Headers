// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VMUSYMBOLSTORE_H
#define VMUSYMBOLSTORE_H

@class NSData, NSMutableDictionary, NSString, NSXMLParser;
@protocol NSSecureCoding, NSXMLParserDelegate;

#import <Foundation/Foundation.h>

#import "VMUDebugTimer.h"
#import "VMUProcessObjectGraph.h"

@interface VMUSymbolStore : NSObject <NSSecureCoding, NSXMLParserDelegate>

 {
    VMUDebugTimer *_debugTimer;
    map<std::string, std::unordered_set<unsigned long long>, std::less<std::string>, std::allocator<std::pair<const std::string, std::unordered_set<unsigned long long>>>> _addressesGroupedByUuid;
    unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> _addressesTracker;
    NSData *_signature;
    BOOL _resymbolicatedSuccessfully;
    NSMutableDictionary *_resymbolicationUUIDs;
    BOOL _debugStore;
    NSString *parsedResult;
    NSString *parsedKey;
    NSString *parsedValue;
    NSXMLParser *xmlParser;
    NSUInteger backtraceSample;
    NSUInteger binarySection;
    NSUInteger globalVariable;
    NSUInteger mallocStackLogging;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) VMUProcessObjectGraph *graph; // ivar: _graph
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) _CSTypeRef symbolicator; // ivar: _symbolicator


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)_getDsymPathsForUUIDs:(id)arg0 andReportProgress:(id)arg1 ;
-(BOOL)_readContentsOfDsymFile:(id)arg0 ;
-(BOOL)_refillSymbolOwnersWithDataAndReportProgress:(id)arg0 ;
-(BOOL)resymbolicateWithDsymPath:(id)arg0 libraryNames:(id)arg1 all:(BOOL)arg2 progress:(id)arg3 showDebugInfo:(BOOL)arg4 error:(*id)arg5 ;
-(id)_createResymbolicatedSignature;
-(id)_createSymbolicatorSignature;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSymbolicator:(struct _CSTypeRef )arg0 debugTimer:(id)arg1 ;
-(void)_extractAddressesFromSymbolicator;
-(void)_flagSymbolOwnersForResymbolication;
-(void)_groupAddressTrackerByUuid;
-(void)addAddress:(NSUInteger)arg0 origin:(int)arg1 ;
-(void)addBacktrace:(id)arg0 origin:(int)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;


@end


#endif