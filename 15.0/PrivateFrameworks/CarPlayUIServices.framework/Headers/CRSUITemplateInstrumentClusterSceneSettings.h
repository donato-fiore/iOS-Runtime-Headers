// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRSUITEMPLATEINSTRUMENTCLUSTERSCENESETTINGS_H
#define CRSUITEMPLATEINSTRUMENTCLUSTERSCENESETTINGS_H

@class NSString;
@protocol CRSUITemplateInstrumentClusterSceneSettings;


#import "CRSUIInstrumentClusterSceneSettings.h"

@interface CRSUITemplateInstrumentClusterSceneSettings : CRSUIInstrumentClusterSceneSettings <CRSUITemplateInstrumentClusterSceneSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger itemType;
@property (readonly, nonatomic) NSInteger mapStyle;
@property (readonly, copy, nonatomic) NSString *proxiedApplicationBundleIdentifier;
@property (readonly, nonatomic) NSUInteger showsCompass;
@property (readonly, nonatomic) NSUInteger showsETA;
@property (readonly, nonatomic) NSUInteger showsSpeedLimit;
@property (readonly) Class superclass;


-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif