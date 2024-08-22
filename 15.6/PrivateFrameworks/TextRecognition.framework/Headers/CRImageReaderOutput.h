// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRIMAGEREADEROUTPUT_H
#define CRIMAGEREADEROUTPUT_H

@class NSArray, NSString;
@protocol CRCodable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRImageReaderOutput : NSObject <CRCodable, NSCopying, NSSecureCoding>



@property float baselineAngle; // ivar: _baselineAngle
@property (readonly) CGPoint bottomLeft; // ivar: _bottomLeft
@property (readonly) CGPoint bottomRight; // ivar: _bottomRight
@property (readonly) CGRect boundingBox; // ivar: _boundingBox
@property (readonly) NSArray *candidates; // ivar: _candidates
@property (readonly) NSArray *components; // ivar: _components
@property int confidence; // ivar: _confidence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property CGSize imageSize; // ivar: _imageSize
@property BOOL isTitle; // ivar: _isTitle
@property (retain) NSString *stringValue; // ivar: _stringValue
@property (readonly) Class superclass;
@property (readonly) CGPoint topLeft; // ivar: _topLeft
@property (readonly) CGPoint topRight; // ivar: _topRight
@property (readonly) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)outputWithType:(id)arg0 textFeature:(id)arg1 imageSize:(struct CGSize )arg2 isTitle:(BOOL)arg3 confidenceThresholdProvider:(id)arg4 ;
+(int)confidenceLevelForConfidenceScore:(CGFloat)arg0 confidenceThresholds:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToImageReaderOutput:(id)arg0 ;
-(id)boundingQuad;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cornersForCharacterRange:(struct _NSRange )arg0 error:(*id)arg1 ;
-(id)crCodableDataRepresentation;
-(id)decodeOutputsArrayFromData:(id)arg0 offset:(*NSUInteger)arg1 version:(NSInteger)arg2 ;
-(id)initV1WithCoder:(id)arg0 ;
-(id)initV2WithDataRepresentation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 textFeature:(id)arg1 imageSize:(struct CGSize )arg2 isTitle:(BOOL)arg3 confidenceThresholdProvider:(id)arg4 ;
-(id)initWithType:(id)arg0 textFeature:(id)arg1 withCandidates:(BOOL)arg2 imageSize:(struct CGSize )arg3 isTitle:(BOOL)arg4 confidenceThresholdProvider:(id)arg5 ;
-(id)quadForCharacterRange:(struct _NSRange )arg0 error:(*id)arg1 ;
-(struct CGPoint )_rotatePointIfNeccessary:(struct CGPoint )arg0 anchor:(struct CGPoint )arg1 angle:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif