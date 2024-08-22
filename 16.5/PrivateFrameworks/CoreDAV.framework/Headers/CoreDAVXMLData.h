// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVXMLDATA_H
#define COREDAVXMLDATA_H

@class NSMutableDictionary, NSMutableArray, NSData;

#import <Foundation/Foundation.h>

#import "CoreDAVXMLData_Impl.h"

@interface CoreDAVXMLData : NSObject {
    CoreDAVXMLData_Impl *_dataImpl;
    BOOL _docHasEnded;
    NSMutableDictionary *_seenURIsToPrefixes;
    NSMutableDictionary *_seenURIsToDepth;
    NSMutableArray *_elementStack;
}


@property (readonly, nonatomic) NSData *data;
@property (nonatomic) BOOL shouldAddFormattingSpaces; // ivar: _shouldAddFormattingSpaces


+(BOOL)string:(id)arg0 isEqualToXmlCharString:(char *)arg1 ;
-(char *)_prefixForNameSpace:(char *)arg0 ;
-(id)init;
-(void)_startElement:(id)arg0 inNamespace:(id)arg1 ;
-(void)_startElement:(id)arg0 inNamespace:(id)arg1 withAttributeNamesAndValues:(id)arg2 attributes:(char *)arg3 ;
-(void)appendElement:(id)arg0 inNamespace:(id)arg1 withStringContent:(id)arg2 withAttributeNamesAndValues:(id)arg3 ;
-(void)appendElement:(id)arg0 inNamespace:(id)arg1 withStringContentAsCDATA:(id)arg2 withAttributeNamesAndValues:(id)arg3 ;
-(void)dealloc;
-(void)endElement:(id)arg0 inNamespace:(id)arg1 ;
-(void)startElement:(id)arg0 inNamespace:(id)arg1 withAttributeNamesAndValues:(id)arg2 ;
-(void)startElement:(id)arg0 inNamespace:(id)arg1 withAttributes:(id)arg2 ;


@end


#endif