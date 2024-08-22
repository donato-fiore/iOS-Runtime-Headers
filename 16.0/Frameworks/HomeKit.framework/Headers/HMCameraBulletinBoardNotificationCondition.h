// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCAMERABULLETINBOARDNOTIFICATIONCONDITION_H
#define HMCAMERABULLETINBOARDNOTIFICATIONCONDITION_H

@class NSArray, NSPredicate, NSString;
@protocol HMFObject, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "HMCameraSignificantEventPersonFamiliarityNotificationCondition.h"
#import "HMCameraSignificantEventReasonNotificationCondition.h"

@interface HMCameraBulletinBoardNotificationCondition : NSObject <HMFObject, NSCopying, NSMutableCopying>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (copy) NSPredicate *dateComponentsPredicate; // ivar: _dateComponentsPredicate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSPredicate *predicate;
@property (copy) NSPredicate *presencePredicate; // ivar: _presencePredicate
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (copy) HMCameraSignificantEventPersonFamiliarityNotificationCondition *significantEventPersonFamiliarityCondition; // ivar: _significantEventPersonFamiliarityCondition
@property (copy) HMCameraSignificantEventReasonNotificationCondition *significantEventReasonCondition; // ivar: _significantEventReasonCondition
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithPredicate:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif