// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFTRAITSORIENTATIONSTAGECOMPONENT_H
#define SBFTRAITSORIENTATIONSTAGECOMPONENT_H

@class NSNumber, NSString;
@protocol SBFTraitsPreferencesStageComponent;

#import <Foundation/Foundation.h>


@interface SBFTraitsOrientationStageComponent : NSObject <SBFTraitsPreferencesStageComponent>



@property (nonatomic) NSNumber *componentOrder; // ivar: _componentOrder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultAccelerometerDrivenRoles;
+(id)defaultActiveOrientationBelowRoles;
+(id)defaultKeyboardFocusDrivenRoles;
+(id)defaultOtherParticipantDrivenRoles;
-(NSInteger)preferencesType;


@end


#endif