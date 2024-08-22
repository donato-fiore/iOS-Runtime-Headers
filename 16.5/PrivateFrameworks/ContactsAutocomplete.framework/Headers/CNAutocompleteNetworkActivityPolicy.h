// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETENETWORKACTIVITYPOLICY_H
#define CNAUTOCOMPLETENETWORKACTIVITYPOLICY_H

@class NSString;
@protocol CNAutocompleteNetworkActivityPolicy;

#import <Foundation/Foundation.h>


@interface CNAutocompleteNetworkActivityPolicy : NSObject <CNAutocompleteNetworkActivityPolicy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)policyWithNoDelay;
+(id)policyWithThrottlingDelayForString:(id)arg0 ;
-(BOOL)shouldSearchServers;
-(CGFloat)delayBeforeBeginningNetworkActivity;


@end


#endif