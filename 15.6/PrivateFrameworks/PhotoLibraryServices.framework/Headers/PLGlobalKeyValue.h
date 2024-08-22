// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLGLOBALKEYVALUE_H
#define PLGLOBALKEYVALUE_H

@class NSNumber, NSDate, NSString;
@protocol NSSecureCoding;


#import "PLManagedObject.h"

@interface PLGlobalKeyValue : PLManagedObject

@property (retain, nonatomic) NSObject<NSSecureCoding> *anyValue;
@property (retain, nonatomic) NSNumber *boolValue;
@property (retain, nonatomic) NSDate *dateValue;
@property (retain, nonatomic) NSNumber *doubleValue;
@property (retain, nonatomic) NSNumber *integerValue;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) short type;


+(id)_globalValueForKeyValue:(id)arg0 ;
+(id)allDecodeClasses;
+(id)attributesForKey;
+(id)dictionaryWithManagedObjectContext:(id)arg0 forMigrationHistory:(BOOL)arg1 ;
+(id)entityName;
+(id)fetchGlobalKeyValueForKey:(id)arg0 withManagedObjectContext:(id)arg1 createIfMissing:(BOOL)arg2 ;
+(id)fetchGlobalKeyValuesForKeys:(id)arg0 withManagedObjectContext:(id)arg1 ;
+(id)globalValueForKey:(id)arg0 managedObjectContext:(id)arg1 ;
+(id)globalValuesForKeys:(id)arg0 managedObjectContext:(id)arg1 ;
+(short)typeForKey:(id)arg0 ;
+(void)_setGlobalValue:(id)arg0 forKeyValue:(id)arg1 managedObjectContext:(id)arg2 ;
+(void)checkTypeForKey:(id)arg0 andValue:(id)arg1 ;
+(void)initialize;
+(void)migrateLocaleIdentifierToGlobalKeyValues:(id)arg0 withPathManager:(id)arg1 ;
+(void)populateWithDictionary:(id)arg0 managedObjectContext:(id)arg1 replaceExisting:(BOOL)arg2 ;
+(void)setGlobalValue:(id)arg0 forKey:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)supportsCloudUpload;


@end


#endif