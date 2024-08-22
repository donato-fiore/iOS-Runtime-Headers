// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANAGEDCONFIGURATION_H
#define MANAGEDCONFIGURATION_H

@class NSManagedObject, NSData;



@interface ManagedConfiguration : NSManagedObject

@property (nonatomic, copy) NSData *data;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif