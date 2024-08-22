// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMTIMELAPSESETTINGS_H
#define CAMTIMELAPSESETTINGS_H


#import <Foundation/Foundation.h>


@interface CAMTimelapseSettings : NSObject

@property (readonly, nonatomic) CGFloat initialCaptureTimeInterval; // ivar: _initialCaptureTimeInterval
@property (readonly, nonatomic) NSInteger maxFailedStateReadAttempts;
@property (readonly, nonatomic) NSInteger maxMovieWriteAttempts;
@property (readonly, nonatomic) CGFloat maxOutputFPS; // ivar: _maxOutputFPS
@property (readonly, nonatomic) NSInteger maxOutputFrames;
@property (readonly, nonatomic) CGFloat maxOutputLength; // ivar: _maxOutputLength


+(id)sharedInstance;
-(CGFloat)outputFPSForFrameCount:(NSInteger)arg0 ;
-(CGFloat)waitTimeBeforeNextWriteForNumberOfPreviousAttempts:(NSInteger)arg0 ;
-(NSInteger)_averageMovieBitrateForWidth:(NSInteger)arg0 height:(NSInteger)arg1 useHEVC:(BOOL)arg2 ;
-(NSInteger)maxMovieFileLengthForWidth:(NSInteger)arg0 height:(NSInteger)arg1 useHEVC:(BOOL)arg2 ;
-(NSInteger)minAvailableBytesNeededForCaptureForWidth:(NSInteger)arg0 height:(NSInteger)arg1 useHEVC:(BOOL)arg2 ;
-(id)_outputSettingsPresetForWidth:(NSInteger)arg0 height:(NSInteger)arg1 ;
-(id)init;
-(id)outputSettingsForWidth:(NSInteger)arg0 height:(NSInteger)arg1 videoFormatDescription:(struct opaqueCMFormatDescription *)arg2 framesPerSecond:(NSInteger)arg3 frameCount:(NSInteger)arg4 useHEVC:(BOOL)arg5 ;


@end


#endif