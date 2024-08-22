// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRSUIMUTABLEINSTRUMENTCLUSTERSCENESETTINGS_H
#define CRSUIMUTABLEINSTRUMENTCLUSTERSCENESETTINGS_H

@class UIMutableCarPlayApplicationSceneSettings, NSString;
@protocol CRSUIInstrumentClusterSceneSettings, CRSUIMutableMapStyleProviding;



@interface CRSUIMutableInstrumentClusterSceneSettings : UIMutableCarPlayApplicationSceneSettings <CRSUIInstrumentClusterSceneSettings, CRSUIMutableMapStyleProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger itemType;
@property (nonatomic) NSUInteger layoutJustification;
@property (readonly, nonatomic) NSInteger mapStyle;
@property (nonatomic) NSUInteger showsCompass;
@property (nonatomic) NSUInteger showsETA;
@property (nonatomic) NSUInteger showsSpeedLimit;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif