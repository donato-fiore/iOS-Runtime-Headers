// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXPIDSUSPENSIONINFO_H
#define AXPIDSUSPENSIONINFO_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AXPidSuspensionInfo : NSObject {
    NSMutableDictionary *_suspendsPids;
    NSMutableDictionary *_probationPids;
    NSMutableDictionary *_tentativeSuspendedPids;
    NSMutableDictionary *_associatedRemotePidCache;
    NSMutableDictionary *_associatedRemotePids;
}




+(id)shared;
-(id)associatedRemotePidCacheForDisplay:(int)arg0 ;
-(id)associatedRemotePidsForDisplay:(int)arg0 ;
-(id)init;
-(id)suspendedPidsForDisplay:(int)arg0 ;
-(id)tentativeSuspendedPidsForDisplay:(int)arg0 ;
-(id)timeoutProbationPidsForDisplay:(int)arg0 ;


@end


#endif