// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASENUMBERMETAPARAMETER_H
#define PHASENUMBERMETAPARAMETER_H



#import "PHASEMetaParameter.h"

@interface PHASENumberMetaParameter : PHASEMetaParameter

@property (readonly, nonatomic) CGFloat maximum; // ivar: _maximum
@property (readonly, nonatomic) CGFloat minimum; // ivar: _minimum


+(id)new;
-(id)init;
-(id)initWithUID:(id)arg0 delegate:(id)arg1 ;
-(id)initWithUID:(id)arg0 value:(CGFloat)arg1 rangeMin:(CGFloat)arg2 rangeMax:(CGFloat)arg3 delegate:(id)arg4 ;
-(void)fadeToValue:(CGFloat)arg0 duration:(CGFloat)arg1 ;


@end


#endif