// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIWEBGEOLOCATIONCHALLENGEDATA_H
#define _UIWEBGEOLOCATIONCHALLENGEDATA_H

@class NSURL, NSString;
@protocol WebAllowDenyPolicyListener;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UIWebGeolocationChallengeData : NSObject

@property (retain, nonatomic) NSObject<WebAllowDenyPolicyListener> *listener; // ivar: _listener
@property (retain, nonatomic) NSURL *requestingURL; // ivar: _requestingURL
@property (retain, nonatomic) NSString *token; // ivar: _token
@property (retain, nonatomic) UIView *view; // ivar: _view


-(void)dealloc;


@end


#endif