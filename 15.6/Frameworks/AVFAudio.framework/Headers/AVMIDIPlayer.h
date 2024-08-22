// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMIDIPLAYER_H
#define AVMIDIPLAYER_H


#import <Foundation/Foundation.h>


@interface AVMIDIPlayer : NSObject {
    *void _impl;
}


@property (nonatomic) CGFloat currentPosition;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) float rate;


-(CGFloat)beatsForHostTime:(NSUInteger)arg0 ;
-(NSUInteger)hostTimeForBeats:(CGFloat)arg0 ;
-(id)initBase;
-(id)initWithContentsOfURL:(id)arg0 soundBankURL:(id)arg1 error:(*id)arg2 ;
-(id)initWithData:(id)arg0 soundBankURL:(id)arg1 error:(*id)arg2 ;
-(struct MIDIPlayerImpl *)impl;
-(void)dealloc;
-(void)destroyBase;
-(void)finalize;
-(void)play:(id)arg0 ;
-(void)prepareToPlay;
-(void)stop;


@end


#endif