// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRSUIPROXYAPPLICATIONSCENESETTINGS_H
#define CRSUIPROXYAPPLICATIONSCENESETTINGS_H

@class NSString;
@protocol CRSUIProxyApplicationSceneSettings;


#import "CRSUIApplicationSceneSettings.h"

@interface CRSUIProxyApplicationSceneSettings : CRSUIApplicationSceneSettings <CRSUIProxyApplicationSceneSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger mapStyle;
@property (readonly, copy, nonatomic) NSString *proxiedApplicationBundleIdentifier;
@property (readonly, nonatomic) BOOL proxiedApplicationLinkedOnOrAfterYukon;
@property (readonly) Class superclass;


-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif