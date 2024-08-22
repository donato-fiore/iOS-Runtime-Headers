// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYMOCKPACINGCUESOURCE_H
#define PXSTORYMOCKPACINGCUESOURCE_H

@class NSArray;
@protocol PXStoryPacingCueSource, PXAudioCueSource;

#import <Foundation/Foundation.h>


@interface PXStoryMockPacingCueSource : NSObject <PXStoryPacingCueSource>



@property (readonly, nonatomic) NSObject<PXAudioCueSource> *audioCueSource; // ivar: _audioCueSource
@property (readonly, copy, nonatomic) NSArray *cueTimes; // ivar: _cueTimes
@property (nonatomic) NSInteger cuesVersion; // ivar: _cuesVersion
@property (nonatomic) ? currentTime; // ivar: _currentTime


-(id)diagnosticCueStringForSize:(struct CGSize )arg0 withIndicatorTime:(struct ? )arg1 rangeIndicatorTimeRange:(struct ? )arg2 ;
-(id)diagnosticErrorsByComponentForHUDType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 displaySize:(struct CGSize )arg1 ;
-(id)init;
-(id)initWithCueTimes:(id)arg0 ;


@end


#endif