// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMCDPROPERTY_H
#define BMCDPROPERTY_H

@class NSManagedObject, NSDate, NSData, NSString;



@interface BMCDProperty : NSManagedObject

@property (nonatomic) NSInteger count;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *key;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif