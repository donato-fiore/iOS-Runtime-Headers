// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUISOUNDMETERLISTENER_H
#define HUISOUNDMETERLISTENER_H

@protocol HUISoundMeterListenerDelegate;

#import <Foundation/Foundation.h>


@interface HUISoundMeterListener : NSObject

@property (nonatomic) BOOL areLocalLevelsAvailable; // ivar: _areLocalLevelsAvailable
@property (nonatomic) BOOL areRemoteLevelsAvailable; // ivar: _areRemoteLevelsAvailable
@property (weak, nonatomic) NSObject<HUISoundMeterListenerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isListeningForLocalLevels; // ivar: _isListeningForLocalLevels
@property (nonatomic) BOOL isListeningForRemoteLevels; // ivar: _isListeningForRemoteLevels
@property (nonatomic) NSUInteger source; // ivar: _source


-(BOOL)shouldShow;
-(id)initWithDelgate:(id)arg0 source:(NSUInteger)arg1 ;
-(void)_startLocalLevels;
-(void)_startRemoteLevels;
-(void)_stopLocalLevels;
-(void)_stopRemoteLevels;
-(void)_updateSoundMeterAvailableLocally:(BOOL)arg0 remotely:(BOOL)arg1 ;
-(void)start;
-(void)stop;


@end


#endif