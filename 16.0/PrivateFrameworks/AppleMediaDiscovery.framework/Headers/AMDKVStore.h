// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMDKVSTORE_H
#define AMDKVSTORE_H

@class NSManagedObject, NSString, NSData;



@interface AMDKVStore : NSManagedObject

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSData *value;


+(id)deleteWithPredicate:(id)arg0 error:(*id)arg1 ;
+(id)fetchAllKeyValues:(*id)arg0 ;
+(id)fetchEntryForKey:(id)arg0 error:(*id)arg1 ;
+(id)fetchRequest;
+(id)fetchValueForKey:(id)arg0 error:(*id)arg1 ;


@end


#endif