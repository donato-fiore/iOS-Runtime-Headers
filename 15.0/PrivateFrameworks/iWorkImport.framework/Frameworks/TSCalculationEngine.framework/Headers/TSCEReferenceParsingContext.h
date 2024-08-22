// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCEREFERENCEPARSINGCONTEXT_H
#define TSCEREFERENCEPARSINGCONTEXT_H

@class NSString, NSArray, NSMutableArray;
@protocol NSCopying, TSCEReferenceResolving;

#import <Foundation/Foundation.h>

#import "TSCEAbortObject.h"
#import "TSCEQuotedRefPathSplitter.h"

@interface TSCEReferenceParsingContext : NSObject <NSCopying>



@property (retain, nonatomic) TSCEAbortObject *abortObject; // ivar: _abortObject
@property (retain, nonatomic) NSString *aggregateFunction; // ivar: _aggregateFunction
@property (retain, nonatomic) NSArray *components; // ivar: _components
@property (readonly, nonatomic) NSObject<TSCEReferenceResolving> *contextResolver;
@property (retain, nonatomic) NSString *contextSheetName; // ivar: _contextSheetName
@property (nonatomic) *TSCETableResolver contextTableResolver; // ivar: _contextTableResolver
@property (nonatomic) BOOL filterColons; // ivar: _filterColons
@property (nonatomic) BOOL namesUsed; // ivar: _namesUsed
@property (nonatomic) BOOL parseAsBaseTableReference; // ivar: _parseAsBaseTableReference
@property (nonatomic) TSUPreserveFlags preserveFlags; // ivar: _preserveFlags
@property (retain, nonatomic) TSCEQuotedRefPathSplitter *refPathSplitter; // ivar: _refPathSplitter
@property (nonatomic) BOOL referenceIsComplete; // ivar: _referenceIsComplete
@property (retain, nonatomic) NSMutableArray *referencesMatchingInputAsPrefix; // ivar: _referencesMatchingInputAsPrefix
@property (retain, nonatomic) NSString *rest; // ivar: _rest
@property (retain, nonatomic) NSString *sheetName; // ivar: _sheetName
@property (retain, nonatomic) NSString *sheetNameUnquoted; // ivar: _sheetNameUnquoted
@property (retain, nonatomic) NSString *tableName; // ivar: _tableName
@property (retain, nonatomic) NSString *tableNameUnquoted; // ivar: _tableNameUnquoted
@property (nonatomic) BOOL trimNames; // ivar: _trimNames


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContextResolver:(id)arg0 ;
-(id)initWithContextResolver:(id)arg0 components:(id)arg1 ;
-(id)initWithContextTableResolver:(struct TSCETableResolver *)arg0 ;
-(id)initWithContextTableResolver:(struct TSCETableResolver *)arg0 components:(id)arg1 ;
-(void)reset;


@end


#endif