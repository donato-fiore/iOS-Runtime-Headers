// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFPHOTOSHARINGOPERATION_H
#define PFPHOTOSHARINGOPERATION_H

@class NSOperation, NSError, NSString, NSDate, CLLocation, NSURL;
@protocol OS_dispatch_queue;


#import "PFAssetAdjustments.h"

@interface PFPhotoSharingOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_externalIsolation;
    NSError *_operationError;
    BOOL _operationComplete;
    BOOL _operationSuccess;
}


@property (retain, nonatomic, setter=_setAdjustments:) PFAssetAdjustments *_adjustments; // ivar: __adjustments
@property (copy, nonatomic) NSString *customAccessibilityLabel; // ivar: _customAccessibilityLabel
@property (copy, nonatomic) NSString *customCaption; // ivar: _customCaption
@property (copy, nonatomic) NSDate *customDate; // ivar: _customDate
@property (copy, nonatomic) CLLocation *customLocation; // ivar: _customLocation
@property (copy, nonatomic, setter=_setImageURL:) NSURL *imageURL; // ivar: _imageURL
@property (readonly, nonatomic) NSError *operationError;
@property (copy, nonatomic) NSURL *outputDirectoryURL; // ivar: _outputDirectoryURL
@property (copy, nonatomic) NSString *outputFilename; // ivar: _outputFilename
@property (readonly, nonatomic) float progress;
@property (readonly, copy, nonatomic) NSURL *resultingFileURL; // ivar: _resultingFileURL
@property (nonatomic) BOOL shouldConvertToSRGB; // ivar: _shouldConvertToSRGB
@property (nonatomic) BOOL shouldStripAccessibilityDescription; // ivar: _shouldStripAccessibilityDescription
@property (nonatomic) BOOL shouldStripCaption; // ivar: _shouldStripCaption
@property (nonatomic) BOOL shouldStripLocation; // ivar: _shouldStripLocation
@property (nonatomic) BOOL shouldStripMetadata; // ivar: _shouldStripMetadata
@property (readonly, nonatomic) BOOL success;


+(BOOL)outputSupportedForTypeIdentifier:(id)arg0 ;
+(id)operationErrorWithCode:(NSInteger)arg0 withDescription:(id)arg1 ;
-(id)initWithImageURL:(id)arg0 adjustmentData:(id)arg1 ;
-(void)main;


@end


#endif