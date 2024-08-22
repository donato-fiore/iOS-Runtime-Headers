// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUHOMECONTROLSERVICECONTEXT_H
#define HUHOMECONTROLSERVICECONTEXT_H

@class NSString, NSURL;
@protocol SBUIRemoteAlertHostInterface;

#import <Foundation/Foundation.h>


@interface HUHomeControlServiceContext : NSObject

@property (readonly, nonatomic) NSString *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (readonly, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (nonatomic) CGRect animationOriginRect; // ivar: _animationOriginRect
@property (copy, nonatomic) NSURL *defaultActionURL; // ivar: _defaultActionURL
@property (retain, nonatomic) NSString *homeIdentifier; // ivar: _homeIdentifier
@property (copy, nonatomic) NSString *homeName; // ivar: _homeName
@property (retain, nonatomic) NSObject<SBUIRemoteAlertHostInterface> *remoteViewControllerProxy; // ivar: _remoteViewControllerProxy
@property (retain, nonatomic) NSString *roomIdentifier; // ivar: _roomIdentifier
@property (copy, nonatomic) NSString *roomName; // ivar: _roomName
@property (nonatomic) NSUInteger serviceType; // ivar: _serviceType


+(id)_homeInfoFromDefaultActionURL:(id)arg0 ;
-(id)_initWithUserInfo:(id)arg0 ;
-(id)initWithAlertConfigurationContext:(id)arg0 ;
-(id)initWithServiceType:(NSUInteger)arg0 defaultActionURL:(id)arg1 ;
-(id)initWithServiceType:(NSUInteger)arg0 home:(id)arg1 room:(id)arg2 ;
-(id)initWithServiceType:(NSUInteger)arg0 homeIdentifier:(id)arg1 roomIdentifier:(id)arg2 ;
-(id)userInfo;


@end


#endif