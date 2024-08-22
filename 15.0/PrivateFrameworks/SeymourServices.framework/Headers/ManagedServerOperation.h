// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDSERVEROPERATION_H
#define MANAGEDSERVEROPERATION_H

@class NSManagedObject, NSData;



@interface ManagedServerOperation : NSManagedObject

@property (nonatomic, copy) NSData *request;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif