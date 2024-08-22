// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSMUTABLESCENECLIENTSETTINGS_H
#define FBSMUTABLESCENECLIENTSETTINGS_H

@class NSString, NSOrderedSet;
@protocol BSDebugDescriptionProviding, BSXPCSecureCoding;


#import "FBSSceneClientSettings.h"
#import "FBSSceneIdentityToken.h"

@interface FBSMutableSceneClientSettings : FBSSceneClientSettings <BSDebugDescriptionProviding, BSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic, setter=_setLayers:) NSOrderedSet *layers;
@property (nonatomic) NSInteger preferredInterfaceOrientation;
@property (nonatomic) CGFloat preferredLevel;
@property (copy, nonatomic) NSString *preferredSceneHostIdentifier;
@property (copy, nonatomic) FBSSceneIdentityToken *preferredSceneHostIdentity;
@property (readonly) Class superclass;


+(BOOL)_isMutable;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)otherSettings;


@end


#endif