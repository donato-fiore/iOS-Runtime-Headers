// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMAUDIOSESSION_H
#define AXMAUDIOSESSION_H

@class NSMutableArray, AVAudioSession;

#import <Foundation/Foundation.h>


@interface AXMAudioSession : NSObject

@property (retain, nonatomic) NSMutableArray *notificationObserverTokens; // ivar: _notificationObserverTokens
@property (retain, nonatomic) AVAudioSession *session; // ivar: _session


-(BOOL)activateSessionWithError:(*id)arg0 ;
-(BOOL)deactivateSessionWithError:(*id)arg0 ;
-(id)_stringForRouteChangeReason:(NSUInteger)arg0 ;
-(id)init;
-(void)_handleMediaServicesLost;
-(void)_handleMediaServicesReset;
-(void)_handleRouteChanged:(NSUInteger)arg0 previousRoute:(id)arg1 ;
-(void)_handleSessionInterrupted:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(void)_handleSilenceSecondaryAudio:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif