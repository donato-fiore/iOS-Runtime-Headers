// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKHOSTREACHABILITY_H
#define GKHOSTREACHABILITY_H

@class NSError, NSString;


#import "GKReachability.h"

@interface GKHostReachability : GKReachability

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSString *hostName; // ivar: _hostName


+(id)_gkReachabilityWithHostName:(id)arg0 ;
-(void)dealloc;


@end


#endif