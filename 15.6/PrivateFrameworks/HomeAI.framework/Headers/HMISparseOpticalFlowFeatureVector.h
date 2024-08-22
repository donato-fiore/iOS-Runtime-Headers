// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMISPARSEOPTICALFLOWFEATUREVECTOR_H
#define HMISPARSEOPTICALFLOWFEATUREVECTOR_H

@class HMFObject;



@interface HMISparseOpticalFlowFeatureVector : HMFObject

@property (readonly) CGRect boundingBox;
@property (retain) Class eventClass; // ivar: _eventClass
@property (readonly) CGPoint midpoint;
@property (readonly) CGVector motion; // ivar: _motion
@property (readonly) CGPoint origin; // ivar: _origin
@property (readonly) CGPoint target;


-(CGFloat)distance;
-(id)initWithOrigin:(struct CGPoint )arg0 motion:(struct CGVector )arg1 ;


@end


#endif