// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRSUIAPPLICATIONSCENESETTINGS_H
#define CRSUIAPPLICATIONSCENESETTINGS_H

@class UICarPlayApplicationSceneSettings, NSString;
@protocol CRSUIApplicationSceneSettings;



@interface CRSUIApplicationSceneSettings : UICarPlayApplicationSceneSettings <CRSUIApplicationSceneSettings>



@property (readonly, nonatomic) CGFloat bannerHeight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger mapStyle;
@property (readonly) Class superclass;


-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif