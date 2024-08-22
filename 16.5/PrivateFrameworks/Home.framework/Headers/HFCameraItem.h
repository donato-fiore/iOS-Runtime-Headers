// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCAMERAITEM_H
#define HFCAMERAITEM_H

@class NSArray, NSString, HMCameraProfile;
@protocol HFCompoundItemProtocol, HFHomeKitObject;


#import "HFAccessoryProfileItem.h"

@interface HFCameraItem : HFAccessoryProfileItem <HFCompoundItemProtocol>



@property (readonly, nonatomic) NSArray *allHomeKitObjects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) BOOL isCompoundItem;
@property (readonly, nonatomic) NSUInteger numberOfCompoundItems;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *primaryHomeKitObject;
@property (readonly, nonatomic) HMCameraProfile *profile;
@property (readonly) Class superclass;


+(BOOL)cameraContainsMotionServiceItem:(id)arg0 ;
+(BOOL)shouldIgnoreStreamErrorForCameraSettings:(id)arg0 ;
+(BOOL)shouldReportNotificationsAsDisabledForProfile:(id)arg0 ;
+(void)getErrorDescription:(*id)arg0 detailedErrorDescription:(*id)arg1 forCameraStreamError:(id)arg2 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;


@end


#endif