// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMCONTINUITYCAPTURESTILLIMAGEREQUEST_H
#define CMCONTINUITYCAPTURESTILLIMAGEREQUEST_H

@class NSString, NSError, NSData, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CMContinuityCaptureStillImageRequest : NSObject <NSSecureCoding>



@property (nonatomic) BOOL captureComplete; // ivar: _captureComplete
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSString *compressedFormat; // ivar: _compressedFormat
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) int flashMode; // ivar: _flashMode
@property (nonatomic) BOOL highResolutionPhotoEnabled; // ivar: _highResolutionPhotoEnabled
@property (nonatomic) unsigned int imageCodecType; // ivar: _imageCodecType
@property (retain, nonatomic) NSData *imageFileData; // ivar: _imageFileData
@property (nonatomic) int imageHeight; // ivar: _imageHeight
@property (nonatomic) int imageWidth; // ivar: _imageWidth
@property (nonatomic) ? maxPhotoDimensions; // ivar: _maxPhotoDimensions
@property (retain, nonatomic) NSNumber *networkTimestamp; // ivar: _networkTimestamp
@property (nonatomic) int photoQualityPrioritization; // ivar: _photoQualityPrioritization
@property (nonatomic) NSInteger uniqueID; // ivar: _uniqueID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif