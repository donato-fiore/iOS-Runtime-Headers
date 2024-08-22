// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMCDCONFIGURATION_H
#define BMCDCONFIGURATION_H

@class NSManagedObject, NSString;



@interface BMCDConfiguration : NSManagedObject

@property (nonatomic) NSInteger ageToExpire;
@property (nonatomic) NSInteger countLimit;
@property (nonatomic, copy) NSString *propertyName;
@property (nonatomic) NSInteger recordType;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif