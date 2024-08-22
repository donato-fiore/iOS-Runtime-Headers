// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTUREPHOTOPRIVATECLIENTMETADATA_H
#define AVCAPTUREPHOTOPRIVATECLIENTMETADATA_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVCapturePhotoPrivateClientMetadata : NSObject <NSSecureCoding>

 {
    NSDictionary *_inferenceAttachments;
    NSDictionary *_detectedObjectInfo;
}


@property (readonly) NSString *captureFolderClientPath;
@property (readonly) NSDictionary *detectedObjectInfo;
@property (readonly) NSDictionary *inferenceAttachments;
@property (readonly) float spatialOverCaptureImageHorizonLineAngleInDegrees;
@property (readonly) BOOL spatialOverCaptureImageHorizonLinePresent;
@property (readonly) float spatialOverCaptureImageHorizonLineVerticalCenterlineIntersection;
@property (readonly) unsigned int spatialOverCaptureImageStitchingConfidenceScore;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetadataDictionary:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif