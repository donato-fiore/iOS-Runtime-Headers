// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRSUIMUTABLEPROXYAPPLICATIONSCENESETTINGS_H
#define CRSUIMUTABLEPROXYAPPLICATIONSCENESETTINGS_H

@class NSString;
@protocol CRSUIProxyApplicationSceneSettings, CRSUIMutableMapStyleProviding;


#import "CRSUIMutableApplicationSceneSettings.h"

@interface CRSUIMutableProxyApplicationSceneSettings : CRSUIMutableApplicationSceneSettings <CRSUIProxyApplicationSceneSettings, CRSUIMutableMapStyleProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger mapStyle;
@property (copy, nonatomic) NSString *proxiedApplicationBundleIdentifier;
@property (nonatomic) BOOL proxiedApplicationLinkedOnOrAfterYukon;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif