// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPSWITCHERSYSTEMSERVICE_H
#define SBAPPSWITCHERSYSTEMSERVICE_H

@class FBServiceClientAuthenticator, NSString;
@protocol SBSystemServiceServerAppSwitcherDelegate;

#import <Foundation/Foundation.h>

#import "SBRecentAppLayouts.h"
#import "SBCommandTabController.h"

@interface SBAppSwitcherSystemService : NSObject <SBSystemServiceServerAppSwitcherDelegate>

 {
    FBServiceClientAuthenticator *_requestAppearanceForHiddenAppAuthenticator;
    SBRecentAppLayouts *_recentAppLayouts;
    SBCommandTabController *_commandTabController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithRecentAppLayoutsController:(id)arg0 commandTabController:(id)arg1 ;
-(void)requestAppearanceForHiddenAppWithBundleIdentifier:(id)arg0 assertionPort:(id)arg1 forClient:(id)arg2 withCompletion:(id)arg3 ;
-(void)systemServiceServer:(id)arg0 requestAppearanceForHiddenAppWithBundleIdentifier:(id)arg1 assertionPort:(id)arg2 forClient:(id)arg3 withCompletion:(id)arg4 ;


@end


#endif