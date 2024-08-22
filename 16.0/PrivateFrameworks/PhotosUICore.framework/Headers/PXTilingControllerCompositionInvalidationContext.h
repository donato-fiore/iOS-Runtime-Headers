// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXTILINGCONTROLLERCOMPOSITIONINVALIDATIONCONTEXT_H
#define PXTILINGCONTROLLERCOMPOSITIONINVALIDATIONCONTEXT_H

@protocol NSObject;

#import <Foundation/Foundation.h>

#import "PXTilingController.h"

@interface PXTilingControllerCompositionInvalidationContext : NSObject

@property (retain, nonatomic) NSObject<NSObject> *animationOptions; // ivar: _animationOptions
@property (retain, nonatomic) PXTilingController *originatingTilingController; // ivar: _originatingTilingController


+(id)defaultAnimationOptionsForTilingController:(id)arg0 withInvalidationContexts:(id)arg1 ;
-(id)description;


@end


#endif