// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHOMECONTROLSERVICECONTEXT_H
#define HUHOMECONTROLSERVICECONTEXT_H

@class NSString, NSSet, NSURL, UIViewController;
@protocol SBUIRemoteAlertHostInterface;

#import <Foundation/Foundation.h>


@interface HUHomeControlServiceContext : NSObject

@property (retain, nonatomic) NSString *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (copy, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (retain, nonatomic) NSSet *actions; // ivar: _actions
@property (nonatomic) CGRect animationOriginRect; // ivar: _animationOriginRect
@property (copy, nonatomic) NSURL *defaultActionURL; // ivar: _defaultActionURL
@property (retain, nonatomic) NSString *homeIdentifier; // ivar: _homeIdentifier
@property (copy, nonatomic) NSString *homeName; // ivar: _homeName
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain, nonatomic) NSObject<SBUIRemoteAlertHostInterface> *remoteViewControllerProxy; // ivar: _remoteViewControllerProxy
@property (retain, nonatomic) NSString *roomIdentifier; // ivar: _roomIdentifier
@property (copy, nonatomic) NSString *roomName; // ivar: _roomName
@property (nonatomic) NSUInteger serviceType; // ivar: _serviceType


+(id)_homeInfoFromDefaultActionURL:(id)arg0 ;
-(id)_initWithUserInfo:(id)arg0 ;
-(id)initWithAlertConfigurationContext:(id)arg0 ;
-(id)initWithServiceType:(NSUInteger)arg0 defaultActionURL:(id)arg1 ;
-(id)initWithServiceType:(NSUInteger)arg0 home:(id)arg1 accessory:(id)arg2 presentingViewController:(id)arg3 ;
-(id)initWithServiceType:(NSUInteger)arg0 home:(id)arg1 room:(id)arg2 ;
-(id)initWithServiceType:(NSUInteger)arg0 homeIdentifier:(id)arg1 accessoryIdentifier:(id)arg2 ;
-(id)initWithServiceType:(NSUInteger)arg0 homeIdentifier:(id)arg1 roomIdentifier:(id)arg2 ;
-(id)userInfo;
-(void)dealloc;


@end


#endif