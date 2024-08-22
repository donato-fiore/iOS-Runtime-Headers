// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRSUIMUTABLETEMPLATEINSTRUMENTCLUSTERSCENESETTINGS_H
#define CRSUIMUTABLETEMPLATEINSTRUMENTCLUSTERSCENESETTINGS_H

@class NSString;
@protocol CRSUITemplateInstrumentClusterSceneSettings;


#import "CRSUIMutableInstrumentClusterSceneSettings.h"

@interface CRSUIMutableTemplateInstrumentClusterSceneSettings : CRSUIMutableInstrumentClusterSceneSettings <CRSUITemplateInstrumentClusterSceneSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger itemType;
@property (readonly, nonatomic) NSInteger mapStyle;
@property (copy, nonatomic) NSString *proxiedApplicationBundleIdentifier;
@property (readonly, nonatomic) NSUInteger showsCompass;
@property (readonly, nonatomic) NSUInteger showsETA;
@property (readonly, nonatomic) NSUInteger showsSpeedLimit;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif