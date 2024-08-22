// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIDEFAULTSESSIONRECONNECTPOLICY_H
#define PBUIDEFAULTSESSIONRECONNECTPOLICY_H

@class NSDate, NSString;
@protocol PBUISessionReconnectPolicy;

#import <Foundation/Foundation.h>


@interface PBUIDefaultSessionReconnectPolicy : NSObject <PBUISessionReconnectPolicy>

 {
    NSDate *_lastDisconnect;
    CGFloat _intervalMovingAverage;
    CGFloat _alpha;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)sessionReconnectDelay;
-(id)init;
-(void)sessionDidDisconnect;


@end


#endif