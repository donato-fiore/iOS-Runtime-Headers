// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARIMAGEANCHOR_H
#define ARIMAGEANCHOR_H

@class NSString;
@protocol ARTrackable;


#import "ARAnchor.h"
#import "ARReferenceImage.h"

@interface ARImageAnchor : ARAnchor <ARTrackable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDetectionOnly) BOOL detectionOnly; // ivar: _detectionOnly
@property (readonly, nonatomic) CGFloat estimatedScaleFactor; // ivar: _estimatedScaleFactor
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTracked; // ivar: _isTracked
@property (readonly, nonatomic) ARReferenceImage *referenceImage; // ivar: _referenceImage
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithTrackedState:(BOOL)arg0 ;
-(id)initWithAnchor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReferenceImage:(id)arg0 transform:(struct ? )arg1 detectionOnly:(BOOL)arg2 tracked:(BOOL)arg3 ;
-(id)name;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif