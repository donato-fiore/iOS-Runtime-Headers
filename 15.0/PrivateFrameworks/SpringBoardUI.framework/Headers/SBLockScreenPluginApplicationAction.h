// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOCKSCREENPLUGINAPPLICATIONACTION_H
#define SBLOCKSCREENPLUGINAPPLICATIONACTION_H

@class NSString, NSURL;


#import "SBLockScreenPluginAction.h"

@interface SBLockScreenPluginApplicationAction : SBLockScreenPluginAction

@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) NSUInteger transitionStyle; // ivar: _transitionStyle
@property (retain, nonatomic, setter=setURL:) NSURL *url; // ivar: _url


+(id)actionWithBundleID:(id)arg0 ;
+(id)actionWithURL:(id)arg0 ;
-(BOOL)isApplicationAction;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif