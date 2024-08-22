// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKCONSTANTNOISESOURCE_H
#define GKCONSTANTNOISESOURCE_H



#import "GKNoiseSource.h"

@interface GKConstantNoiseSource : GKNoiseSource

@property (nonatomic) CGFloat value; // ivar: _value


+(id)constantNoiseWithValue:(CGFloat)arg0 ;
-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(id)initWithValue:(CGFloat)arg0 ;


@end


#endif