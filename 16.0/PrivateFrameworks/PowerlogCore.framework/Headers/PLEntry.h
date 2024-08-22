// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLENTRY_H
#define PLENTRY_H

@class NSArray, NSMutableDictionary, NSDate, NSDictionary, NSString, NSMutableArray;
@protocol NSCopying, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface PLEntry : NSObject <NSCopying>



@property (readonly) NSArray *arrayKeys;
@property (readonly) NSArray *definedKeys;
@property (retain) NSMutableDictionary *dictionary; // ivar: _dictionary
@property (readonly) NSArray *dynamicKeys;
@property (retain, nonatomic) NSDate *entryDate; // ivar: _entryDate
@property (retain, nonatomic) NSDictionary *entryDefinition; // ivar: _entryDefinition
@property (nonatomic) NSInteger entryID; // ivar: _entryID
@property (retain, nonatomic) NSString *entryKey; // ivar: _entryKey
@property BOOL existsInDB; // ivar: _existsInDB
@property (readonly) BOOL hasArrayKeys;
@property (readonly) BOOL hasDynamicKeys;
@property BOOL isErrorEntry; // ivar: _isErrorEntry
@property (readonly) NSMutableArray *keys;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem; // ivar: _sem
@property (readonly) id *subEntryKey;
@property (readonly, getter=allValues) NSMutableArray *values;
@property BOOL writeToDB; // ivar: _writeToDB


+(Class)classForEntryKey:(id)arg0 ;
+(id)entryWithEntryKey:(id)arg0 withData:(id)arg1 ;
+(id)entryWithEntryKey:(id)arg0 withRawData:(id)arg1 ;
+(id)summarizeAggregateEntries:(id)arg0 ;
+(id)summarizeAggregateEntries:(id)arg0 withPrimaryKeys:(id)arg1 ;
+(void)load;
+(void)registerEntry:(Class)arg0 ;
-(BOOL)filterEntryLogging;
-(BOOL)hasAppIdentifierKeys;
-(BOOL)isKeyAggregateValue:(id)arg0 ;
-(BOOL)isKeyDynamic:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)compare:(id)arg0 options:(short)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)definitionForKey:(id)arg0 ;
-(id)description;
-(id)descriptionRespectingAllowlist:(BOOL)arg0 ;
-(id)init;
-(id)initEntryWithData:(id)arg0 ;
-(id)initEntryWithRawData:(id)arg0 ;
-(id)initWithEntryDate:(id)arg0 ;
-(id)initWithEntryKey:(id)arg0 ;
-(id)initWithEntryKey:(id)arg0 withData:(id)arg1 ;
-(id)initWithEntryKey:(id)arg0 withDate:(id)arg1 ;
-(id)initWithEntryKey:(id)arg0 withRawData:(id)arg1 ;
-(id)keyValuePathForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)serialized;
-(id)serializedForJSON;
-(id)unitForKey:(id)arg0 ;
-(int)staticArraySizeForKey:(id)arg0 ;
-(short)formaterForKey:(id)arg0 ;
-(void)checkOverridesEntryDateWithNowDate:(id)arg0 ;
-(void)loadDynamicKeys;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setDynamicObjectsFromRawData:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setObjectsFromData:(id)arg0 ;
-(void)setObjectsFromRawData:(id)arg0 ;
-(void)setObjectsUsingMetricsFromData:(id)arg0 ;


@end


#endif