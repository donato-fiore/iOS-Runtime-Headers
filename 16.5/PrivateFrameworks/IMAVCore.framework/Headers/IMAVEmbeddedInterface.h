// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMAVEMBEDDEDINTERFACE_H
#define IMAVEMBEDDEDINTERFACE_H



#import "IMAVConferenceInterface.h"

@interface IMAVEmbeddedInterface : IMAVConferenceInterface



+(void)updateCriticalState;
-(NSInteger)_checkNetworkForChat:(id)arg0 requiresWifi:(BOOL)arg1 ;
-(NSInteger)_runPingTestForChat:(id)arg0 ;
-(void)_conferenceEnded:(id)arg0 ;
-(void)_conferenceWillStart:(id)arg0 ;
-(void)chatStateUpdated;


@end


#endif