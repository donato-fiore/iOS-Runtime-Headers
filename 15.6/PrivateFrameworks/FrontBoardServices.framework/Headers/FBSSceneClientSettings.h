// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSSCENECLIENTSETTINGS_H
#define FBSSCENECLIENTSETTINGS_H

@class BSSettings, NSString, NSOrderedSet;
@protocol BSDebugDescriptionProviding, BSXPCSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "FBSSceneIdentityToken.h"

@interface FBSSceneClientSettings : NSObject <BSDebugDescriptionProviding, BSXPCSecureCoding, NSCopying, NSMutableCopying>

 {
    BSSettings *_otherSettings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSOrderedSet *layers; // ivar: _layers
@property (readonly, nonatomic) NSInteger preferredInterfaceOrientation; // ivar: _preferredInterfaceOrientation
@property (readonly, nonatomic) CGFloat preferredLevel; // ivar: _preferredLevel
@property (readonly, copy, nonatomic) NSString *preferredSceneHostIdentifier; // ivar: _preferredSceneHostIdentifier
@property (readonly, copy, nonatomic) FBSSceneIdentityToken *preferredSceneHostIdentity; // ivar: _preferredSceneHostIdentity
@property (readonly) Class superclass;


+(BOOL)_isMutable;
+(BOOL)supportsBSXPCSecureCoding;
+(id)settings;
-(BOOL)appendDescriptionToBuilder:(id)arg0 forFlag:(NSInteger)arg1 object:(id)arg2 ofSetting:(NSUInteger)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)settings:(id)arg0 appendDescriptionToBuilder:(id)arg1 forFlag:(NSInteger)arg2 object:(id)arg3 ofSetting:(NSUInteger)arg4 ;
-(id)_descriptionBuilderWithMultilinePrefix:(id)arg0 debug:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)occlusions;
-(id)otherSettings;
-(id)settings:(id)arg0 keyDescriptionForSetting:(NSUInteger)arg1 ;
-(id)settings:(id)arg0 valueDescriptionForFlag:(NSInteger)arg1 object:(id)arg2 ofSetting:(NSUInteger)arg3 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif