// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIDVRGBCAPTUREUICONFIG_H
#define CIDVRGBCAPTUREUICONFIG_H

@class CIDVRGBContext, NSNumber, NSArray, NSString, UINavigationController;
@protocol CIDVRGBCaptureDelegate, PADFrameQualityMonitor;

#import <Foundation/Foundation.h>


@interface CIDVRGBCaptureUIConfig : NSObject

@property (weak, nonatomic) CIDVRGBContext *context; // ivar: _context
@property (weak, nonatomic) NSObject<CIDVRGBCaptureDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSNumber *faceOutOfBoundFrames; // ivar: _faceOutOfBoundFrames
@property (retain, nonatomic) NSNumber *gestureCompletionDelay; // ivar: _gestureCompletionDelay
@property (retain, nonatomic) NSNumber *gestureDetectedSuccessDuration; // ivar: _gestureDetectedSuccessDuration
@property (retain, nonatomic) NSArray *gestureSequence; // ivar: _gestureSequence
@property (retain, nonatomic) NSNumber *gestureSkipHardAccessible; // ivar: _gestureSkipHardAccessible
@property (retain, nonatomic) NSNumber *gestureSkipHardTimeout; // ivar: _gestureSkipHardTimeout
@property (retain, nonatomic) NSNumber *gestureSkipSoftAccessible; // ivar: _gestureSkipSoftAccessible
@property (retain, nonatomic) NSNumber *gestureSkipSoftTimeout; // ivar: _gestureSkipSoftTimeout
@property (retain, nonatomic) NSArray *gestureTypes; // ivar: _gestureTypes
@property (retain, nonatomic) NSNumber *imageCompressionQuality; // ivar: _imageCompressionQuality
@property (retain, nonatomic) NSNumber *imageHeight; // ivar: _imageHeight
@property (retain, nonatomic) NSNumber *imageWidth; // ivar: _imageWidth
@property (retain, nonatomic) NSString *issuerName; // ivar: _issuerName
@property (nonatomic) NSUInteger maxRetakeCount; // ivar: _maxRetakeCount
@property (retain, nonatomic) NSNumber *minRequiredGesturesCount; // ivar: _minRequiredGesturesCount
@property (retain, nonatomic) UINavigationController *parentVC; // ivar: _parentVC
@property (retain, nonatomic) NSObject<PADFrameQualityMonitor> *qualityMonitor; // ivar: _qualityMonitor
@property (nonatomic) BOOL requiresGoodLux; // ivar: _requiresGoodLux
@property (nonatomic) NSInteger targetDevice; // ivar: _targetDevice
@property (retain, nonatomic) NSNumber *timeout; // ivar: _timeout
@property (retain, nonatomic) NSNumber *tutorialResumeDelay; // ivar: _tutorialResumeDelay
@property (retain, nonatomic) NSNumber *tutorialVideoDelay; // ivar: _tutorialVideoDelay
@property (retain, nonatomic) NSNumber *tutorialVideoDuration; // ivar: _tutorialVideoDuration


-(id)initWithCaptureConfig:(id)arg0 imageQualityDelegate:(id)arg1 andCaptureDelegate:(id)arg2 ;


@end


#endif