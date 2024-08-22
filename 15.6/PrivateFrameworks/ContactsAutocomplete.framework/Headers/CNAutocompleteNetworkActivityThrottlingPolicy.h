// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAUTOCOMPLETENETWORKACTIVITYTHROTTLINGPOLICY_H
#define CNAUTOCOMPLETENETWORKACTIVITYTHROTTLINGPOLICY_H

@class NSString;
@protocol CNAutocompleteNetworkActivityPolicy;

#import <Foundation/Foundation.h>


@interface CNAutocompleteNetworkActivityThrottlingPolicy : NSObject <CNAutocompleteNetworkActivityPolicy>

 {
    NSUInteger _lengthOfString;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldSearchServers;
-(CGFloat)delayBeforeBeginningNetworkActivity;
-(id)initWithString:(id)arg0 ;


@end


#endif