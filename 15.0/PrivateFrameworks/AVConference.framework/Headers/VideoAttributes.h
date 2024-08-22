// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOATTRIBUTES_H
#define VIDEOATTRIBUTES_H

@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface VideoAttributes : NSObject <NSCopying, NSCoding>



@property (nonatomic) int camera; // ivar: camera
@property (nonatomic) BOOL cameraSwitching; // ivar: cameraSwitching
@property (nonatomic) CGRect contentsRect; // ivar: contentsRect
@property (nonatomic) ? framePresentationTime; // ivar: framePresentationTime
@property (nonatomic) int orientation; // ivar: orientation
@property (nonatomic) CGSize ratio; // ivar: ratio
@property (nonatomic) float scaleFactor; // ivar: scaleFactor
@property (nonatomic) BOOL videoMirrored; // ivar: videoMirrored
@property (nonatomic) BOOL videoSourceScreen; // ivar: videoSourceScreen


+(id)cameraUIDForVideoAttributeCamera:(int)arg0 ;
+(id)videoAttributesWithVideoAttributes:(id)arg0 ;
+(int)videoAttributeCameraForCameraUID:(id)arg0 ;
-(BOOL)isEqualToVideoAttributes:(id)arg0 ;
-(id)copyEncodedDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCameraStatusBits:(unsigned char)arg0 aspectRatio:(struct CGSize )arg1 contentsRect:(struct CGRect )arg2 scaleFactor:(float)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEncodedDictionary:(id)arg0 ;
-(struct __CFDictionary *)newEncodedCFDictionary;
-(void)decodeFromNSDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateCameraStatusBits:(unsigned char)arg0 ;


@end


#endif