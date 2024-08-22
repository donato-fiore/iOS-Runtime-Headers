// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLENTRYKEY_H
#define PLENTRYKEY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PLEntryKey.h"

@interface PLEntryKey : NSObject

@property (weak) PLEntryKey *baseEntryKey; // ivar: _baseEntryKey
@property (readonly, retain) NSString *entryKey; // ivar: _entryKey
@property (readonly, retain) NSString *entryName; // ivar: _entryName
@property (readonly, retain) NSString *entryType; // ivar: _entryType
@property (nonatomic) BOOL isDynamic; // ivar: _isDynamic
@property (readonly, retain) Class operatorClass; // ivar: _operatorClass
@property (readonly, retain) NSString *operatorName; // ivar: _operatorName
@property (nonatomic) _PLTimeIntervalRange timeIntervalRange; // ivar: _timeIntervalRange
@property (copy, nonatomic) NSString *wildCardName; // ivar: _wildCardName


+(BOOL)isEntryKeySetup:(id)arg0 forOperatorName:(id)arg1 ;
+(BOOL)shouldConfigureAdditionalTable:(id)arg0 withType:(id)arg1 withName:(id)arg2 ;
+(BOOL)shouldConfigureTable:(id)arg0 withType:(id)arg1 withName:(id)arg2 withConfigs:(id)arg3 ;
+(Class)operatorClassForEntryKey:(id)arg0 ;
+(id)PLEntryAggregateKeysForOperator:(id)arg0 ;
+(id)PLEntryAggregateKeysForOperatorClass:(Class)arg0 ;
+(id)PLEntryAggregateKeysForOperatorName:(id)arg0 ;
+(id)PLEntryKeyForEntryKey:(id)arg0 ;
+(id)PLEntryKeyForOperatorName:(id)arg0 withType:(id)arg1 withName:(id)arg2 ;
+(id)PLEntryKeyForOperatorName:(id)arg0 withType:(id)arg1 withName:(id)arg2 withWildCardName:(id)arg3 isDynamic:(BOOL)arg4 ;
+(id)PLEntryKeyStringsForTasking;
+(id)PLEntryKeysForEntryType:(id)arg0 ;
+(id)baseEntryKeyForEntryKey:(id)arg0 ;
+(id)dynamicEntryKeyForEntryKey:(id)arg0 ;
+(id)entryKeyForOperatorName:(id)arg0 withType:(id)arg1 withName:(id)arg2 ;
+(id)entryKeyForOperatorName:(id)arg0 withType:(id)arg1 withName:(id)arg2 isDynamic:(BOOL)arg3 ;
+(id)entryKeyForOperatorName:(id)arg0 withType:(id)arg1 withName:(id)arg2 withWildCardName:(id)arg3 ;
+(id)entryKeyForOperatorName:(id)arg0 withType:(id)arg1 withName:(id)arg2 withWildCardName:(id)arg3 isDynamic:(BOOL)arg4 ;
+(id)entryKeyStringForOperatorName:(id)arg0 withType:(id)arg1 withName:(id)arg2 ;
+(id)entryKeysForOperator:(id)arg0 ;
+(id)entryKeysForOperatorClass:(Class)arg0 ;
+(id)entryKeysForOperatorName:(id)arg0 ;
+(id)operatorNameForEntryKey:(id)arg0 ;
+(id)timeintervalRangeEntryKeyForEntryKey:(id)arg0 withTimeIntervalRange:(struct _PLTimeIntervalRange )arg1 ;
+(id)wildCardForEntryKey:(id)arg0 ;
+(struct _PLTimeIntervalRange )timeIntervalRangeForEntryKey:(id)arg0 ;
+(void)PLEntryKeyStringsForTaskingReset;
+(void)addPLEntryKey:(id)arg0 ;
+(void)addPLEntryKeyStringToTasking:(id)arg0 ;
+(void)setupEntryObjectsForOperatorClass:(Class)arg0 ;
-(id)copyWithIsDynamic:(BOOL)arg0 ;
-(id)copyWithTimeIntervalRange:(struct _PLTimeIntervalRange )arg0 ;
-(id)copyWithWildCardName:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithOperatorName:(id)arg0 withEntryType:(id)arg1 withEntryName:(id)arg2 ;


@end


#endif