// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASESHAREDLISTENER_H
#define PHASESHAREDLISTENER_H



#import "PHASEListener.h"

@interface PHASESharedListener : PHASEListener



-(BOOL)addChild:(id)arg0 error:(*id)arg1 ;
-(id)initInternalWithEngine:(id)arg0 ;
-(id)initWithEngine:(id)arg0 ;
-(id)initWithEngine:(id)arg0 entityType:(unsigned int)arg1 ;
-(void)dealloc;
-(void)removeChild:(id)arg0 ;
-(void)removeChildren;
-(void)setGain:(CGFloat)arg0 ;
-(void)setTransform:(struct ? )arg0 ;


@end


#endif