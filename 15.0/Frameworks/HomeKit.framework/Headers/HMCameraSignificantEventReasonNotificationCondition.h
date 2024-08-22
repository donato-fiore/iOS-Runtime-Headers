// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCAMERASIGNIFICANTEVENTREASONNOTIFICATIONCONDITION_H
#define HMCAMERASIGNIFICANTEVENTREASONNOTIFICATIONCONDITION_H

@class NSArray, NSString, NSPredicate;
@protocol HMFObject, NSCopying;

#import <Foundation/Foundation.h>


@interface HMCameraSignificantEventReasonNotificationCondition : NSObject <HMFObject, NSCopying>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSPredicate *predicate;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) NSUInteger significantEventTypes; // ivar: _significantEventTypes
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPredicate:(id)arg0 ;
-(id)initWithSignificantEventTypes:(NSUInteger)arg0 ;


@end


#endif