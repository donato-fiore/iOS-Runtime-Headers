// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKCYLINDERSNOISESOURCE_H
#define GKCYLINDERSNOISESOURCE_H



#import "GKNoiseSource.h"

@interface GKCylindersNoiseSource : GKNoiseSource

@property (nonatomic) CGFloat frequency; // ivar: _frequency


+(id)cylindersNoiseWithFrequency:(CGFloat)arg0 ;
-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(id)initWithFrequency:(CGFloat)arg0 ;


@end


#endif