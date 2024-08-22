// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARENVIRONMENTPROBEANCHOR_H
#define ARENVIRONMENTPROBEANCHOR_H

@class NSData, NSUUID;
@protocol MTLTexture;


#import "ARAnchor.h"

@interface AREnvironmentProbeAnchor : ARAnchor {
    ? _extent;
}


@property (retain, nonatomic) NSData *colorHistogram; // ivar: _colorHistogram
@property (retain, nonatomic) NSObject<MTLTexture> *environmentTexture; // ivar: _environmentTexture
@property ? extent;
@property (nonatomic) float opaquePixelPercentage; // ivar: _opaquePixelPercentage
@property (retain, nonatomic) NSUUID *trackedPlaneIdentifier; // ivar: _trackedPlaneIdentifier


-(id)initWithAnchor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 onPlane:(struct ARTexturedPlane )arg1 ;
-(id)initWithIdentifier:(id)arg0 transform:(struct ? )arg1 ;
-(id)initWithIdentifier:(id)arg0 transform:(struct ? )arg1 extent;
-(id)initWithName:(id)arg0 transform:(struct ? )arg1 ;
-(id)initWithName:(id)arg0 transform:(struct ? )arg1 extent;
-(id)initWithTransform:(struct ? )arg0 ;
-(id)initWithTransform:(struct ? )arg0 extent;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif