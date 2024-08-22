// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMAUDIOSESSIONCONTROLLER_IOS_H
#define IMAUDIOSESSIONCONTROLLER_IOS_H



#import "IMAudioSessionController.h"

@interface IMAudioSessionController_iOS : IMAudioSessionController



-(id)init;
-(void)audioSessionInterruption:(id)arg0 ;
-(void)audioSessionMediaServicesWereLost:(id)arg0 ;
-(void)audioSessionMediaServicesWereReset:(id)arg0 ;
-(void)audioSessionRouteChange:(id)arg0 ;
-(void)configureAudioSessionWithOptions:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)setActive:(BOOL)arg0 ;


@end


#endif