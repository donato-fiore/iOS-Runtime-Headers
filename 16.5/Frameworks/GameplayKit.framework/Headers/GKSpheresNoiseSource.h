// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKSPHERESNOISESOURCE_H
#define GKSPHERESNOISESOURCE_H



#import "GKNoiseSource.h"

@interface GKSpheresNoiseSource : GKNoiseSource

@property (nonatomic) CGFloat frequency; // ivar: _frequency


+(id)spheresNoiseWithFrequency:(CGFloat)arg0 ;
-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(id)initWithFrequency:(CGFloat)arg0 ;


@end


#endif