// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIDVRGBCAPTURECONFIG_H
#define CIDVRGBCAPTURECONFIG_H

@class NSDictionary, NSNumber, NSArray, NSString, UIViewController, NSData;

#import <Foundation/Foundation.h>


@interface CIDVRGBCaptureConfig : NSObject

@property (nonatomic) *__CFString encryptionAlgorithm; // ivar: _encryptionAlgorithm
@property (retain, nonatomic) id *encryptionKey; // ivar: _encryptionKey
@property (retain, nonatomic) NSDictionary *encryptionParameters; // ivar: _encryptionParameters
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
@property (retain, nonatomic) NSNumber *lastGestureExtraFrameDuration; // ivar: _lastGestureExtraFrameDuration
@property (retain, nonatomic) NSNumber *maxRetakeCount; // ivar: _maxRetakeCount
@property (retain, nonatomic) NSNumber *minRequiredGesturesCount; // ivar: _minRequiredGesturesCount
@property (weak, nonatomic) UIViewController *parentVC; // ivar: _parentVC
@property (nonatomic) BOOL requiresGoodLux; // ivar: _requiresGoodLux
@property (nonatomic) *__CFString signingAlgorithm; // ivar: _signingAlgorithm
@property (retain, nonatomic) id *signingKey; // ivar: _signingKey
@property (retain, nonatomic) NSData *signingNonce; // ivar: _signingNonce
@property (nonatomic) NSInteger targetDevice; // ivar: _targetDevice
@property (retain, nonatomic) NSNumber *timeout; // ivar: _timeout
@property (retain, nonatomic) NSNumber *tutorialResumeDelay; // ivar: _tutorialResumeDelay
@property (retain, nonatomic) NSNumber *tutorialVideoDelay; // ivar: _tutorialVideoDelay
@property (retain, nonatomic) NSNumber *tutorialVideoDuration; // ivar: _tutorialVideoDuration


-(void)sanitize;


@end


#endif