// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMRECTANGLEDETECTORNODE_H
#define AXMRECTANGLEDETECTORNODE_H



#import "AXMEvaluationNode.h"

@interface AXMRectangleDetectorNode : AXMEvaluationNode

@property (nonatomic) CGPoint cameraOpticalOrigin; // ivar: _cameraOpticalOrigin
@property (nonatomic) CGFloat cameraPixelFocalLength; // ivar: _cameraPixelFocalLength
@property (nonatomic) CGFloat maximumAspectRatio; // ivar: _maximumAspectRatio
@property (nonatomic) NSInteger maximumNumberOfRects; // ivar: _maximumNumberOfRects
@property (nonatomic) CGFloat minimumAspectRatio; // ivar: _minimumAspectRatio
@property (nonatomic) CGFloat minimumSize; // ivar: _minimumSize
@property (nonatomic) CGFloat quadratureTolerance; // ivar: _quadratureTolerance


+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(BOOL)requiresVisionFramework;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)evaluate:(id)arg0 metrics:(id)arg1 ;
-(void)nodeInitialize;


@end


#endif