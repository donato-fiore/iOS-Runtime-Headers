// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSHIDEVENTHITTESTLAYERINFORMATION_H
#define BKSHIDEVENTHITTESTLAYERINFORMATION_H

@class NSString, NSArray;
@protocol NSSecureCoding, BSDescriptionStreamable, BSProtobufSerializable, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface BKSHIDEventHitTestLayerInformation : NSObject <NSSecureCoding, BSDescriptionStreamable, BSProtobufSerializable, NSCopying, NSMutableCopying>

 {
    NSUInteger _validMask;
    float _cumulativeOpacity;
    float _backgroundMinimum;
    float _backgroundMaximum;
    float _backgroundAverage;
    float _backgroundStandardDeviation;
    CATransform3D _cumulativeLayerTransform;
    CATransform3D _cumulativeContentsTransform;
    BOOL _hasInsecureFilter;
    BOOL _detectedOcclusion;
}


@property (readonly, nonatomic) float backgroundAverage;
@property (readonly, nonatomic) float backgroundMaximum;
@property (readonly, nonatomic) float backgroundMinimum;
@property (readonly, nonatomic) float backgroundStandardDeviation;
@property (readonly, nonatomic) CATransform3D cumulativeContentsTransform;
@property (readonly, nonatomic) CATransform3D cumulativeLayerTransform;
@property (readonly, nonatomic) float cumulativeOpacity;
@property (readonly, nonatomic) CATransform3D cumulativeTransform;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL detectedOcclusion;
@property (readonly, nonatomic) BOOL hasInsecureFilter;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *maximumBackgroundColor;
@property (readonly, copy, nonatomic) NSArray *minimumBackgroundColor;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger validMask;


+(BOOL)supportsSecureCoding;
+(id)build:(id)arg0 ;
+(id)new;
+(id)protobufSchema;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initForProtobufDecoding;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_updateCCHmacContext:(struct ? *)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif