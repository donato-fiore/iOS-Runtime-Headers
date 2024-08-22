// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COMPOSITIONDUCKINGTIMES_H
#define COMPOSITIONDUCKINGTIMES_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CompositionDuckingTimes : NSObject

@property (retain, nonatomic) NSMutableArray *duckingEvents; // ivar: m_duckingEvents
@property int projectDurationInFrames; // ivar: m_projectDurationInFrames


+(id)compositionDuckingTimesWithProject:(id)arg0 ;
-(BOOL)clipIsAudible:(id)arg0 ;
-(BOOL)shouldDuckAtTime:(int)arg0 ;
-(id)initWithProject:(id)arg0 ;
-(int)nextDuckChangeTimeFromTime:(int)arg0 ;
-(void)addDuckingFromTime:(int)arg0 toTime:(int)arg1 ;
-(void)appendDuckingChangeAtFrameTime:(int)arg0 shouldDuck:(BOOL)arg1 ;
-(void)dealloc;
-(void)makeDuckingDataForEditListWithProject:(id)arg0 ;
-(void)makeDuckingDataForForegroundAudioClipsWithProject:(id)arg0 ;


@end


#endif