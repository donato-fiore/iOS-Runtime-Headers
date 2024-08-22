// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWSTILLIMAGECAPTURESETTINGS_H
#define BWSTILLIMAGECAPTURESETTINGS_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BWFrameStatisticsByPortType.h"
#import "BWStillImageCaptureMetadata.h"

@interface BWStillImageCaptureSettings : NSObject <NSSecureCoding>

 {
    BWFrameStatisticsByPortType *_frameStatisticsByPortType;
    BWStillImageCaptureMetadata *_metadata;
}


@property (copy, nonatomic) NSString *applicationID; // ivar: _applicationID
@property (readonly, nonatomic) int bracketedCaptureSequenceNumberForOISLongExposure;
@property (readonly, nonatomic) NSUInteger captureFlags; // ivar: _captureFlags
@property (readonly, nonatomic) NSArray *captureStreamSettings; // ivar: _captureStreamSettings
@property (readonly, nonatomic) int captureType; // ivar: _captureType
@property (nonatomic) BOOL deliverDeferredPhotoProxyImage; // ivar: _deliverDeferredPhotoProxyImage
@property (readonly, nonatomic) BOOL deliverOriginalImage; // ivar: _deliverOriginalImage
@property (readonly, nonatomic) BOOL deliverSushiRaw; // ivar: _deliverSushiRaw
@property (readonly, nonatomic) BOOL expectReferenceFrameBracketedCaptureSequenceNumber;
@property (nonatomic) int expectedClientImageCount; // ivar: _tempExpectedClientImageCount
@property (nonatomic) ? lastTimeMachinePTS; // ivar: _lastTimeMachinePTS
@property (retain, nonatomic) NSString *masterPortType; // ivar: _masterPortType
@property (readonly, nonatomic) NSArray *portTypes;
@property (nonatomic) BOOL prefersStillImageShiftedToMatchSpatialOverCapturePreview; // ivar: _prefersStillImageShiftedToMatchSpatialOverCapturePreview
@property (nonatomic) BOOL produceDeferredPhotoProxyImage; // ivar: _produceDeferredPhotoProxyImage
@property (nonatomic) float scaleFactor; // ivar: _scaleFactor
@property (nonatomic) NSUInteger sceneFlags; // ivar: _sceneFlags
@property (readonly, nonatomic) NSInteger settingsID; // ivar: _settingsID
@property (nonatomic) NSInteger stillImageRequestTime; // ivar: _stillImageRequestTime
@property (nonatomic) int timeMachineReferenceFrameBracketedCaptureSequenceNumber; // ivar: _timeMachineReferenceFrameBracketedCaptureSequenceNumber


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)captureStreamSettingsForPortType:(id)arg0 ;
-(id)description;
-(id)frameStatisticsByPortType;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSettingsID:(NSInteger)arg0 captureType:(int)arg1 captureFlags:(NSUInteger)arg2 sceneFlags:(NSUInteger)arg3 frameStatisticsByPortType:(id)arg4 deliverOriginalImage:(BOOL)arg5 deliverSushiRaw:(BOOL)arg6 captureStreamSettings:(id)arg7 ;
-(id)metadata;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setMetadata:(id)arg0 ;


@end


#endif