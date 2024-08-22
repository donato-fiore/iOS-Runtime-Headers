// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUSERNOTIFICATIONACTION_H
#define AMSUSERNOTIFICATIONACTION_H

@class NSURL, NSString, NSURLRequest, NSDictionary;

#import <Foundation/Foundation.h>

#import "AMSMetricsEvent.h"

@interface AMSUserNotificationAction : NSObject

@property (retain, nonatomic) NSURL *defaultURL; // ivar: _defaultURL
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) AMSMetricsEvent *metricsEvent; // ivar: _metricsEvent
@property (retain, nonatomic) NSURLRequest *request; // ivar: _request
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) NSString *systemImageName; // ivar: _systemImageName
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSUInteger un_ActionOptions;
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(id)generateUserInfoAction;
-(id)init;
-(id)initWithTitle:(id)arg0 ;
-(id)initWithTitle:(id)arg0 style:(NSInteger)arg1 ;
-(id)initWithUserInfoAction:(id)arg0 ;


@end


#endif