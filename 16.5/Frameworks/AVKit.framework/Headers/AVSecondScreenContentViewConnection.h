// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSECONDSCREENCONTENTVIEWCONNECTION_H
#define AVSECONDSCREENCONTENTVIEWCONNECTION_H

@class AVPlayer, AVDisplayCriteria;


#import "AVSecondScreenConnection.h"

@interface AVSecondScreenContentViewConnection : AVSecondScreenConnection

@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (retain, nonatomic) AVDisplayCriteria *preferredDisplayCriteria;
@property (nonatomic, getter=isReadyToConnect) BOOL readyToConnect;
@property (nonatomic) BOOL requiresTVOutScreen;


-(id)initWithContentView:(id)arg0 ;
-(void)_updateReadyToConnect;
-(void)dealloc;
-(void)enablePlayerDebugInformation:(id)arg0 ;
-(void)startUpdates;


@end


#endif