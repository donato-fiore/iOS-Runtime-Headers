// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBARCUSTOMIZATIONCONTAINERVIEW_H
#define _UIBARCUSTOMIZATIONCONTAINERVIEW_H

@protocol _UITraitEnvironmentInternal;


#import "UIView.h"

@interface _UIBarCustomizationContainerView : UIView

@property (weak, nonatomic) NSObject<_UITraitEnvironmentInternal> *parentTraitEnvironment; // ivar: _parentTraitEnvironment
@property (copy, nonatomic) id *traitChangeHandler; // ivar: _traitChangeHandler


-(id)initWithParentTraitEnvironment:(id)arg0 ;
-(id)traitCollection;
-(void)_traitCollectionDidChangeOnSubtreeInternal:(struct _UITraitCollectionChangeDescription *)arg0 ;


@end


#endif