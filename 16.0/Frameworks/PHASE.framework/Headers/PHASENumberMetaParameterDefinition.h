// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASENUMBERMETAPARAMETERDEFINITION_H
#define PHASENUMBERMETAPARAMETERDEFINITION_H



#import "PHASEMetaParameterDefinition.h"

@interface PHASENumberMetaParameterDefinition : PHASEMetaParameterDefinition

@property (readonly, nonatomic) CGFloat maximum; // ivar: _maximum
@property (readonly, nonatomic) CGFloat minimum; // ivar: _minimum
@property (readonly, nonatomic) CGFloat rangeMax;
@property (readonly, nonatomic) CGFloat rangeMin;


+(id)new;
-(id)init;
-(id)initWithValue:(CGFloat)arg0 ;
-(id)initWithValue:(CGFloat)arg0 identifier:(id)arg1 ;
-(id)initWithValue:(CGFloat)arg0 minimum:(CGFloat)arg1 maximum:(CGFloat)arg2 ;
-(id)initWithValue:(CGFloat)arg0 minimum:(CGFloat)arg1 maximum:(CGFloat)arg2 identifier:(id)arg3 ;
-(id)initWithValue:(CGFloat)arg0 rangeMin:(CGFloat)arg1 rangeMax:(CGFloat)arg2 uid:(id)arg3 ;
-(id)initWithValue:(CGFloat)arg0 uid:(id)arg1 ;


@end


#endif