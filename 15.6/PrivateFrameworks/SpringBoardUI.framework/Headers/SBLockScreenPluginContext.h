// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBLOCKSCREENPLUGINCONTEXT_H
#define SBLOCKSCREENPLUGINCONTEXT_H

@class NSString, FBProcess<FBSProcess>, NSDictionary;
@protocol BSDescriptionProviding, NSCopying, SBLockScreenPluginLifecycleObserver;

#import <Foundation/Foundation.h>


@interface SBLockScreenPluginContext : NSObject <BSDescriptionProviding, NSCopying>



@property (copy, nonatomic) id *auxiliaryAnimation; // ivar: _auxiliaryAnimation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSObject<SBLockScreenPluginLifecycleObserver> *observer; // ivar: _observer
@property (retain, nonatomic) FBProcess<FBSProcess> *process; // ivar: _process
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(id)contextWithName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif