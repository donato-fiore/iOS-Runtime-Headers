// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKNETWORKACTIVITYINDICATORDELEGATE_H
#define GKNETWORKACTIVITYINDICATORDELEGATE_H

@class NSString;
@protocol GKDaemonProxyNetworkActivityIndicatorDelegate;

#import <Foundation/Foundation.h>


@interface GKNetworkActivityIndicatorDelegate : NSObject <GKDaemonProxyNetworkActivityIndicatorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int networkIndicatorCount; // ivar: _networkIndicatorCount
@property (readonly) Class superclass;


-(void)beginNetworkActivity;
-(void)endNetworkActivity;
-(void)resetNetworkActivity;


@end


#endif