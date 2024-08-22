// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFOPENURLROUTER_H
#define HFOPENURLROUTER_H

@protocol HFApplicationURLHandling;

#import <Foundation/Foundation.h>


@interface HFOpenURLRouter : NSObject

@property (weak, nonatomic) NSObject<HFApplicationURLHandling> *applicationURLHandler; // ivar: _applicationURLHandler


+(id)sharedInstance;
-(id)openSensitiveURL:(id)arg0 ;
-(id)openURL:(id)arg0 ;
-(void)_sendAnalyticsEventForURL:(id)arg0 ;


@end


#endif