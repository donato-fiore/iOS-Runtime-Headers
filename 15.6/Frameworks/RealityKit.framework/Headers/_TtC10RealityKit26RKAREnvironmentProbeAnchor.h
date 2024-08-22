// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC10REALITYKIT26RKARENVIRONMENTPROBEANCHOR_H
#define _TTC10REALITYKIT26RKARENVIRONMENTPROBEANCHOR_H

@class AREnvironmentProbeAnchor;



@interface _TtC10RealityKit26RKAREnvironmentProbeAnchor : AREnvironmentProbeAnchor {
    ? refreshInterval;
    ? priority;
    ? weight;
    ? delegate;
}




-(id)initWithAnchor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 transform:(struct ? )arg1 ;
-(id)initWithIdentifier:(id)arg0 transform:(struct ? )arg1 extent;
-(id)initWithIdentifier:(id)arg0 transform:(struct ? )arg1 name:(id)arg2 ;
-(id)initWithName:(id)arg0 transform:(struct ? )arg1 ;
-(id)initWithName:(id)arg0 transform:(struct ? )arg1 extent;
-(id)initWithTransform:(struct ? )arg0 ;
-(id)initWithTransform:(struct ? )arg0 extent;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif