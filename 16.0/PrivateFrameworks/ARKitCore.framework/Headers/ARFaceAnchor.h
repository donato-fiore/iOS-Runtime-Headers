// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARFACEANCHOR_H
#define ARFACEANCHOR_H

@class NSDictionary, NSString, NSError;
@protocol ARTrackable, ARFaceTrackingDataProtocol;


#import "ARAnchor.h"
#import "ARFaceGeometry.h"

@interface ARFaceAnchor : ARAnchor <ARTrackable>

 {
    NSDictionary *_blendShapeCoefficientsDictionary;
}


@property (readonly, nonatomic) NSDictionary *blendShapes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ARFaceGeometry *geometry; // ivar: _geometry
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTracked; // ivar: _isTracked
@property (readonly, nonatomic) ? leftEyeTransform;
@property ? lookAtPoint;
@property (readonly, nonatomic) ? rightEyeTransform;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<ARFaceTrackingDataProtocol> *trackingData; // ivar: _trackingData
@property (retain, nonatomic) NSError *trackingError; // ivar: _trackingError


-(BOOL)isEqualToFaceAnchor:(id)arg0 ;
-(id)copyWithTrackedState:(BOOL)arg0 ;
-(id)initWithAnchor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExistingFaceAnchor:(id)arg0 tracked:(BOOL)arg1 trackingError:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 faceTrackingData:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 trackingData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif