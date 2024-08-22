// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSENGAGEMENTMESSAGEREQUEST_H
#define AMSENGAGEMENTMESSAGEREQUEST_H

@class NSArray, NSDictionary, NSURL, NSString;

#import <Foundation/Foundation.h>

#import "AMSEngagementMessageAction.h"
#import "AMSEngagementRequest.h"
#import "AMSMetricsEvent.h"

@interface AMSEngagementMessageRequest : NSObject

@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (retain, nonatomic) NSDictionary *appearanceInfo; // ivar: _appearanceInfo
@property (copy, nonatomic) NSDictionary *clickstreamMetricsEvent; // ivar: _clickstreamMetricsEvent
@property (retain, nonatomic) AMSEngagementMessageAction *defaultAction; // ivar: _defaultAction
@property (retain, nonatomic) AMSEngagementRequest *engagementRequest; // ivar: _engagementRequest
@property (retain, nonatomic) NSURL *iconURL; // ivar: _iconURL
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent; // ivar: _metricsEvent
@property (nonatomic) NSInteger presentationAction; // ivar: _presentationAction
@property (nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)_actionForMessageAction:(id)arg0 ;
-(id)initWithJSObject:(id)arg0 ;
-(id)makeDialogRequest;


@end


#endif