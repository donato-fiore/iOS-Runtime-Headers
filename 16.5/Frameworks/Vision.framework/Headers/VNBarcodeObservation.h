// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNBARCODEOBSERVATION_H
#define VNBARCODEOBSERVATION_H

@class NSString, NSData, NSNumber, NSDictionary, CIBarcodeDescriptor;
@protocol VNDataDetectorSupporting;


#import "VNRectangleObservation.h"

@interface VNBarcodeObservation : VNRectangleObservation <VNDataDetectorSupporting>

 {
    NSString *_cachedPayloadStringValue;
    NSData *_cachedPayloadDataValue;
    NSNumber *_cachedAppClipCodeMetadataValue;
}


@property (copy, nonatomic, setter=setACBSBarcodeInfo:) NSDictionary *acbsBarcodeInfo; // ivar: _acbsBarcodeInfo
@property (readonly, copy, nonatomic) NSNumber *appClipCodeMetadataValue;
@property (readonly, nonatomic) CIBarcodeDescriptor *barcodeDescriptor; // ivar: _barcodeDescriptor
@property (nonatomic, setter=setMRCDescriptor:) *__MRCDescriptor mrcDescriptor; // ivar: _mrcDescriptor
@property (readonly, copy, nonatomic) NSData *payloadDataValue;
@property (readonly, copy, nonatomic) NSString *payloadStringValue;
@property (readonly, copy, nonatomic) NSString *symbology; // ivar: _symbology


+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)getDataDetectorResults:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 symbology:(id)arg1 descriptor:(id)arg2 boundingBox:(struct CGRect )arg3 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 symbology:(id)arg1 descriptor:(id)arg2 topLeft:(struct CGPoint )arg3 bottomLeft:(struct CGPoint )arg4 bottomRight:(struct CGPoint )arg5 topRight:(struct CGPoint )arg6 ;
-(id)vn_cloneObject;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setMrcDescriptor:(struct __MRCDescriptor *)arg0 ;


@end


#endif