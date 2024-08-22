// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASESPATIALMIXER_H
#define PHASESPATIALMIXER_H

@class NSArray;


#import "PHASEMixer.h"
#import "PHASEListener.h"
#import "PHASESource.h"

@interface PHASESpatialMixer : PHASEMixer

@property (nonatomic) Handle64 distanceModel; // ivar: _distanceModel
@property (readonly, nonatomic) PHASEListener *listener; // ivar: _listener
@property (nonatomic) Handle64 listenerDirectivityModel; // ivar: _listenerDirectivityModel
@property (readonly, nonatomic) PHASESource *source; // ivar: _source
@property (nonatomic) Handle64 sourceDirectivityModel; // ivar: _sourceDirectivityModel
@property (readonly, nonatomic) NSArray *spatialModelerSends; // ivar: _spatialModelerSends


+(id)new;
-(id)init;
-(id)initWithIdentifier:(id)arg0 spatialModelerSends:(id)arg1 source:(id)arg2 listener:(id)arg3 sourceDirectivityModel:(struct Handle64 )arg4 listenerDirectivityModel:(struct Handle64 )arg5 distanceModel:(struct Handle64 )arg6 ;


@end


#endif