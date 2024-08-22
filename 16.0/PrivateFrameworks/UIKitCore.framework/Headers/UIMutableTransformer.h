// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIMUTABLETRANSFORMER_H
#define UIMUTABLETRANSFORMER_H

@protocol UIMutableTransformerDelegate;


#import "UITransformer.h"

@interface UIMutableTransformer : UITransformer

@property (weak, nonatomic, setter=_setDelegate:) NSObject<UIMutableTransformerDelegate> *_delegate; // ivar: _delegate


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(void)_ensureTransformsStructuresExists;
-(void)_updateTransform;
-(void)addTransform:(id)arg0 reason:(id)arg1 ;
-(void)removeAll;
-(void)removeTransform:(id)arg0 ;
-(void)replaceTransform:(id)arg0 withTransform:(id)arg1 reason:(id)arg2 ;


@end


#endif