// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMTIMELAPSESTATE_H
#define CAMTIMELAPSESTATE_H

@class NSDate, CLLocation, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CAMTimelapseState : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL allFramesWritten; // ivar: _allFramesWritten
@property (nonatomic) NSInteger captureDevice; // ivar: _captureDevice
@property (nonatomic, getter=isCaptureMirrored) BOOL captureMirrored; // ivar: _captureMirrored
@property (nonatomic) int captureOrientation; // ivar: _captureOrientation
@property (readonly, nonatomic) CGFloat captureTimeInterval; // ivar: _captureTimeInterval
@property (readonly, nonatomic) NSInteger connectionMode;
@property (nonatomic) float focusLensPosition; // ivar: _focusLensPosition
@property (readonly, nonatomic) NSInteger frameIndexStride; // ivar: _frameIndexStride
@property (retain, nonatomic) NSDate *lastFrameResponseTime; // ivar: _lastFrameResponseTime
@property (readonly, nonatomic) NSInteger nextFrameIndex; // ivar: _nextFrameIndex
@property (nonatomic) CGSize nominalIntermediateFrameSize; // ivar: _nominalIntermediateFrameSize
@property (nonatomic) BOOL preferHEVC; // ivar: _preferHEVC
@property (nonatomic) unsigned short sessionIdentifier; // ivar: _sessionIdentifier
@property (retain, nonatomic) CLLocation *startLocation; // ivar: _startLocation
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (nonatomic) NSInteger stopReasons; // ivar: _stopReasons
@property (retain, nonatomic) NSDate *stopTime; // ivar: _stopTime
@property (retain, nonatomic) NSString *timelapseUUID; // ivar: _timelapseUUID


+(BOOL)supportsSecureCoding;
+(CGFloat)maxTimeToWaitForWrittenFrameAfterStop;
+(id)stateWithContentsOfFile:(id)arg0 ;
-(BOOL)_commonCAMTimelapseStateInitWithCoder:(id)arg0 ;
-(BOOL)addStopReasons:(NSInteger)arg0 stopTime:(id)arg1 ;
-(BOOL)canContinueCapture;
-(BOOL)incrementFrameIndex;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToState:(id)arg0 ;
-(BOOL)isReadyForWritingMovie;
-(BOOL)mergeSecondaryState:(id)arg0 ;
-(BOOL)writeToFile:(id)arg0 createDirectoryIfNeeded:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)filePathForNextFrameIndex;
-(id)fullDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forceCompleted;


@end


#endif