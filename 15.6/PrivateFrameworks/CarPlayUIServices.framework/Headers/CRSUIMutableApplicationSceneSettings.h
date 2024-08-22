// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRSUIMUTABLEAPPLICATIONSCENESETTINGS_H
#define CRSUIMUTABLEAPPLICATIONSCENESETTINGS_H

@class UIMutableCarPlayApplicationSceneSettings, NSString;
@protocol CRSUIApplicationSceneSettings, CRSUIMutableMapStyleProviding;



@interface CRSUIMutableApplicationSceneSettings : UIMutableCarPlayApplicationSceneSettings <CRSUIApplicationSceneSettings, CRSUIMutableMapStyleProviding>



@property (nonatomic) CGFloat bannerHeight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger mapStyle;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif