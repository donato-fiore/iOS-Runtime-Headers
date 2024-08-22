// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGINTERRUPTIONASSISTANT_H
#define PGINTERRUPTIONASSISTANT_H

@class NSMutableDictionary, NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface PGInterruptionAssistant : NSObject {
    NSMutableDictionary *_lock_interruptions;
    NSString *_lock_exemptAttribution;
    BOOL _lock_allowsResumingAfterInterruptionEnds;
    BOOL _lock_isInterrupted;
    BOOL _lock_isInterruptedAccordingToProxy;
    BOOL _lock_isProxyActive;
    BOOL _lock_exemptFromUILockInterruptionsWhenActive;
    os_unfair_lock_s _lock;
    id<BSInvalidatable> *_stateDumpInvalidatable;
}


@property (readonly) BOOL allowsResumingAfterInterruptionEnds;
@property (getter=isExemptFromUILockInterruptionsWhenActive) BOOL exemptFromUILockInterruptionsWhenActive;
@property (readonly, getter=isInterrupted) BOOL interrupted;
@property (getter=isProxyActive) BOOL proxyActive;


-(BOOL)_lock_calculateIsInterrupted;
-(BOOL)hasInterruptionReason:(NSInteger)arg0 ;
-(BOOL)shouldNotifyProxyOfInterruptionBegan;
-(BOOL)shouldNotifyProxyOfInterruptionEnded;
-(id)_interruptionsDescription;
-(id)cameraInterruptionAttributions;
-(id)copyWithExemptAttribution:(id)arg0 ;
-(id)description;
-(id)exemptAttribution;
-(id)init;
-(void)addReason:(NSInteger)arg0 attribution:(id)arg1 ;
-(void)dealloc;
-(void)noteDidNotifyProxyOfInterruptionBegan;
-(void)noteDidNotifyProxyOfInterruptionEnded;
-(void)removeReason:(NSInteger)arg0 attribution:(id)arg1 ;
-(void)setExemptAttribution:(id)arg0 ;


@end


#endif