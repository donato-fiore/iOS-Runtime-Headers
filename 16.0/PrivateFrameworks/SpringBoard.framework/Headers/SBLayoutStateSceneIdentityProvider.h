// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLAYOUTSTATESCENEIDENTITYPROVIDER_H
#define SBLAYOUTSTATESCENEIDENTITYPROVIDER_H

@class FBSDisplayIdentity, NSString;
@protocol SBApplicationSceneIdentityProviding, SBLayoutStateSceneIdentityProviderDataSource;

#import <Foundation/Foundation.h>


@interface SBLayoutStateSceneIdentityProvider : NSObject <SBApplicationSceneIdentityProviding>

 {
    FBSDisplayIdentity *_displayIdentity;
}


@property (weak, nonatomic) NSObject<SBLayoutStateSceneIdentityProviderDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_identifierForApplication:(id)arg0 ;
-(id)_sceneIdentityForApplication:(id)arg0 uniqueIdentifier:(id)arg1 targetContentIdentifier:(id)arg2 allowCanMatches:(BOOL)arg3 preferNewScene:(BOOL)arg4 allowSceneCreation:(BOOL)arg5 visibleIdentifiers:(id)arg6 excludingIdentifiers:(id)arg7 sceneSessionRole:(id)arg8 preferedDisplay:(id)arg9 ;
-(id)initWithDisplayIdentity:(id)arg0 ;
-(id)newSceneIdentityForApplication:(id)arg0 ;
-(id)sceneIdentityForApplication:(id)arg0 ;
-(id)sceneIdentityForApplication:(id)arg0 createPrimaryIfRequired:(BOOL)arg1 sceneSessionRole:(id)arg2 ;
-(id)sceneIdentityForApplication:(id)arg0 excludingIdentifiers:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg0 targetContentIdentifier:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg0 targetContentIdentifier:(id)arg1 allowCanMatches:(BOOL)arg2 preferNewScene:(BOOL)arg3 allowSceneCreation:(BOOL)arg4 visibleIdentifiers:(id)arg5 preferedDisplay:(id)arg6 ;
-(id)sceneIdentityForApplication:(id)arg0 targetContentIdentifier:(id)arg1 allowCanMatches:(BOOL)arg2 preferNewScene:(BOOL)arg3 visibleIdentifiers:(id)arg4 ;
-(id)sceneIdentityForApplication:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg0 uniqueIdentifier:(id)arg1 targetContentIdentifier:(id)arg2 ;
-(id)sceneIdentityForApplication:(id)arg0 uniqueIdentifier:(id)arg1 targetContentIdentifier:(id)arg2 sceneSessionRole:(id)arg3 ;


@end


#endif