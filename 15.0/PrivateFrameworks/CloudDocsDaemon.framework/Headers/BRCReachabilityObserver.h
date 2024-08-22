// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCREACHABILITYOBSERVER_H
#define BRCREACHABILITYOBSERVER_H

@class NSString;
@protocol BRCReachabilityDelegate;

#import <Foundation/Foundation.h>


@interface BRCReachabilityObserver : NSObject <BRCReachabilityDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *networkReachabilityDidChangeHandler; // ivar: _networkReachabilityDidChangeHandler
@property (readonly) Class superclass;


-(void)networkReachabilityChanged:(BOOL)arg0 ;
-(void)startObservingNetworkReachabilityChanges;
-(void)stopObservingNetworkReachabilityChanges;


@end


#endif