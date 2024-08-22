// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEDIACONTROLSHAPTICPLAYER_H
#define MEDIACONTROLSHAPTICPLAYER_H

@class CHHapticEngine;
@protocol CHHapticPatternPlayer;

#import <Foundation/Foundation.h>


@interface MediaControlsHapticPlayer : NSObject

@property (retain, nonatomic) CHHapticEngine *engine; // ivar: _engine
@property (retain, nonatomic) NSObject<CHHapticPatternPlayer> *expandedButtonChangedPlayer; // ivar: _expandedButtonChangedPlayer


-(void)checkError:(id)arg0 ;
-(void)dealloc;
-(void)expandedButtonChanged;
-(void)prepare;
-(void)setupExpandedButtonChanged;
-(void)tearDown;


@end


#endif