// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDSCDKV_H
#define PDSCDKV_H

@class NSManagedObject, NSData, NSString, NSNumber;



@interface PDSCDKV : NSManagedObject

@property (retain, nonatomic) NSData *dataValue;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSNumber *numValue;
@property (copy, nonatomic) NSString *stringValue;


+(id)fetchRequest;
+(id)insertIntoManagedObjectContext:(id)arg0 ;
+(id)predicateForKey:(id)arg0 ;


@end


#endif