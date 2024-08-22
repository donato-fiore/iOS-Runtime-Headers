// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOMICROPHONEMONITOR_H
#define AVAUDIOMICROPHONEMONITOR_H

@class NSString;
@protocol AVAudioMicrophoneMonitor;

#import <Foundation/Foundation.h>


@interface AVAudioMicrophoneMonitor : NSObject <AVAudioMicrophoneMonitor>

 {
    set<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>, std::less<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>, std::allocator<std::pair<AVAudioMicrophoneMonitorClientType, unsigned long long>>> _clientsWithMicEnabled;
    mutex _monitorMutex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)setState:(BOOL)arg0 clientType:(NSInteger)arg1 clientID:(NSUInteger)arg2 clientDescription:(char *)arg3 ;
-(id)init;


@end


#endif