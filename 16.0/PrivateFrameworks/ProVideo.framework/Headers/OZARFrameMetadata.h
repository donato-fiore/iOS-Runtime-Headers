// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OZARFRAMEMETADATA_H
#define OZARFRAMEMETADATA_H

@protocol NSSecureCoding;


#import "OZARMetadata.h"

@interface OZARFrameMetadata : OZARMetadata <NSSecureCoding>



@property (nonatomic) CGSize cameraImageResolution; // ivar: _cameraImageResolution
@property (nonatomic) ? cameraIntrinsics; // ivar: _cameraIntrinsics
@property (nonatomic) ? cameraTransform; // ivar: _cameraTransform


+(BOOL)supportsSecureCoding;
+(id)metadataItemIdentifier;
+(struct opaqueCMFormatDescription *)metadataFormat;
-(id)description;
-(id)initWithCameraTransform:(struct ? )arg0 cameraIntrinsics:(struct ? )arg1 cameraImageResolution:(struct CGSize )arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif