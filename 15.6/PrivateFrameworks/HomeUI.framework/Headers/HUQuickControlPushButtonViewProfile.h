// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUQUICKCONTROLPUSHBUTTONVIEWPROFILE_H
#define HUQUICKCONTROLPUSHBUTTONVIEWPROFILE_H

@class NSString, HFNumberValueConstraints;
@protocol HUQuickControlIncrementalConvertibleProfile;


#import "HUQuickControlViewProfile.h"

@interface HUQuickControlPushButtonViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSecondaryValue;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HFNumberValueConstraints *primaryValueConstraints;
@property (readonly, nonatomic) HFNumberValueConstraints *secondaryValueConstraints;
@property (readonly) Class superclass;
@property (nonatomic) BOOL toggleColorScheme; // ivar: _toggleColorScheme


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif