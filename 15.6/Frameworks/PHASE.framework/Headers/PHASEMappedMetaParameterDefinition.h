// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASEMAPPEDMETAPARAMETERDEFINITION_H
#define PHASEMAPPEDMETAPARAMETERDEFINITION_H



#import "PHASENumberMetaParameterDefinition.h"
#import "PHASEEnvelope.h"

@interface PHASEMappedMetaParameterDefinition : PHASENumberMetaParameterDefinition

@property (readonly, nonatomic) PHASEEnvelope *envelope; // ivar: _envelope
@property (readonly, nonatomic) PHASENumberMetaParameterDefinition *inputMetaParameterDefinition; // ivar: _inputMetaParameterDefinition
@property (readonly, nonatomic) CGFloat maximum;
@property (readonly, nonatomic) CGFloat minimum;


+(id)new;
-(id)init;
-(id)initWithInputMetaParameterDefinition:(id)arg0 envelope:(id)arg1 ;
-(id)initWithInputMetaParameterDefinition:(id)arg0 envelope:(id)arg1 identifier:(id)arg2 ;
-(id)initWithInputMetaParameterDefinition:(id)arg0 envelope:(id)arg1 uid:(id)arg2 ;
-(id)initWithValue:(CGFloat)arg0 ;
-(id)initWithValue:(CGFloat)arg0 identifier:(id)arg1 ;
-(id)initWithValue:(CGFloat)arg0 minimum:(CGFloat)arg1 maximum:(CGFloat)arg2 ;
-(id)initWithValue:(CGFloat)arg0 minimum:(CGFloat)arg1 maximum:(CGFloat)arg2 identifier:(id)arg3 ;


@end


#endif