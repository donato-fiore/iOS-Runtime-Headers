// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSENGAGEMENTMESSAGEACTION_H
#define AMSENGAGEMENTMESSAGEACTION_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>

#import "AMSMetricsEvent.h"

@interface AMSEngagementMessageAction : NSObject

@property (retain, nonatomic) NSURL *deepLink; // ivar: _deepLink
@property (retain, nonatomic) NSURL *iconURL; // ivar: _iconURL
@property (retain, nonatomic) AMSMetricsEvent *metricsEvent; // ivar: _metricsEvent
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithJSObject:(id)arg0 ;


@end


#endif