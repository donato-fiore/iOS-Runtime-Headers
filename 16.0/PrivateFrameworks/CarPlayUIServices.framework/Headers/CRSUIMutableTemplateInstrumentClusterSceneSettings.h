// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRSUIMUTABLETEMPLATEINSTRUMENTCLUSTERSCENESETTINGS_H
#define CRSUIMUTABLETEMPLATEINSTRUMENTCLUSTERSCENESETTINGS_H

@class NSString;
@protocol CRSUITemplateInstrumentClusterSceneSettings, OS_xpc_object;


#import "CRSUIMutableInstrumentClusterSceneSettings.h"

@interface CRSUIMutableTemplateInstrumentClusterSceneSettings : CRSUIMutableInstrumentClusterSceneSettings <CRSUITemplateInstrumentClusterSceneSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger itemType;
@property (readonly, nonatomic) NSUInteger layoutJustification;
@property (readonly, nonatomic) NSInteger mapStyle;
@property (copy, nonatomic) NSString *proxiedApplicationBundleIdentifier;
@property (readonly, nonatomic) NSUInteger showsCompass;
@property (readonly, nonatomic) NSUInteger showsETA;
@property (readonly, nonatomic) NSUInteger showsSpeedLimit;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSObject<OS_xpc_object> *templateEndpoint;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif