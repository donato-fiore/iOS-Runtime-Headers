// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRSUIINSTRUMENTCLUSTERSCENESETTINGS_H
#define CRSUIINSTRUMENTCLUSTERSCENESETTINGS_H

@class UICarPlayApplicationSceneSettings, NSString;
@protocol CRSUIInstrumentClusterSceneSettings;



@interface CRSUIInstrumentClusterSceneSettings : UICarPlayApplicationSceneSettings <CRSUIInstrumentClusterSceneSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger itemType;
@property (readonly, nonatomic) NSUInteger layoutJustification;
@property (readonly, nonatomic) NSInteger mapStyle;
@property (readonly, nonatomic) NSUInteger showsCompass;
@property (readonly, nonatomic) NSUInteger showsETA;
@property (readonly, nonatomic) NSUInteger showsSpeedLimit;
@property (readonly) Class superclass;


-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif