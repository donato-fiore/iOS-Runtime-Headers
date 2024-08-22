// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_MPRESTRICTIONSMONITOR_H
#define MUSICKIT_SOFTLINKING_MPRESTRICTIONSMONITOR_H

@class MPRestrictionsMonitor;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPRestrictionsMonitor : NSObject {
    MPRestrictionsMonitor *_underlyingRestrictionsMonitor;
}


@property (readonly, nonatomic) BOOL allowsDeletion;
@property (readonly, nonatomic) BOOL allowsExplicitContent;


+(id)sharedRestrictionsMonitor;
-(id)_initWithUnderlyingRestrictionsMonitor:(id)arg0 ;
-(void)_handleAllowsExplicitContentDidChangeNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif