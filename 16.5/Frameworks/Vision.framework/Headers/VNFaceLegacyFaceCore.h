// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNFACELEGACYFACECORE_H
#define VNFACELEGACYFACECORE_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying, VNRequestRevisionProviding;

#import <Foundation/Foundation.h>


@interface VNFaceLegacyFaceCore : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding>



@property (readonly, nonatomic) CGFloat faceAngle; // ivar: _faceAngle
@property (readonly, nonatomic) CGRect faceBoundingBox; // ivar: _faceBoundingBox
@property (readonly, nonatomic) CGPoint faceCenter; // ivar: _faceCenter
@property (readonly, nonatomic) CGFloat faceSize; // ivar: _faceSize
@property (readonly, nonatomic) NSDictionary *features; // ivar: _features
@property (readonly, nonatomic) CGPoint leftEye; // ivar: _leftEye
@property (readonly, nonatomic) CGPoint mouth; // ivar: _mouth
@property (readonly, nonatomic) NSUInteger profile; // ivar: _profile
@property (readonly, nonatomic) NSUInteger requestRevision;
@property (readonly, nonatomic) CGPoint rightEye; // ivar: _rightEye
@property (readonly, nonatomic) NSUInteger trackDuration; // ivar: _trackDuration
@property (readonly, nonatomic) NSInteger trackID; // ivar: _trackID


+(BOOL)supportsSecureCoding;
+(void)_setFaceExpressionFeatureScoreIfDetected:(id)arg0 features:(id)arg1 detectionKey:(id)arg2 scoreKey:(id)arg3 featureKey:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFace:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif