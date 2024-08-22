// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSFOLLOWUPACTION_H
#define AMSFOLLOWUPACTION_H

@class NSMutableDictionary, NSString, NSURLRequest, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSMetricsEvent.h"

@interface AMSFollowUpAction : NSObject {
    NSMutableDictionary *_userInfo;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *actionQueue; // ivar: _actionQueue
@property (retain, nonatomic) NSString *backingIdentifier; // ivar: _backingIdentifier
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSString *logKey;
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent; // ivar: _metricsEvent
@property (retain, nonatomic) NSString *parentIdentifier;
@property (retain, nonatomic) NSString *preferredClient;
@property (retain, nonatomic) NSURLRequest *request;
@property (nonatomic) BOOL requiresFollowUpUI;
@property (nonatomic) BOOL shouldClear;
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (retain, nonatomic) NSMutableDictionary *userInfo;


-(id)generateAction;
-(id)initWithAction:(id)arg0 ;
-(id)initWithAction:(id)arg0 parentIdentifier:(id)arg1 ;
-(id)initWithItem:(id)arg0 action:(id)arg1 ;
-(id)initWithLabel:(id)arg0 ;
-(id)initWithLabel:(id)arg0 parentIdentifier:(id)arg1 ;
-(id)performActionsWithBag:(id)arg0 account:(id)arg1 ;
-(id)performActionsWithContract:(id)arg0 account:(id)arg1 ;
-(id)postMetricsWithBag:(id)arg0 ;
-(id)postMetricsWithBagContract:(id)arg0 ;


@end


#endif