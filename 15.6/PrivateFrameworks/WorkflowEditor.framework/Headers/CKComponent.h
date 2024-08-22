// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCOMPONENT_H
#define CKCOMPONENT_H

@class UIView;
@protocol NSObject;

#import <Foundation/Foundation.h>

#import "CKComponentScopeHandle.h"

@interface CKComponent : NSObject {
    CKComponentScopeHandle *_scopeHandle;
    CKComponentViewConfiguration _viewConfiguration;
    unique_ptr<CKComponentMountInfo, std::default_delete<CKComponentMountInfo>> _mountInfo;
}


@property (weak, nonatomic) UIView *rootComponentMountedView;
@property (readonly, nonatomic) NSObject<NSObject> *scopeFrameToken;
@property (readonly, nonatomic) CKComponentSize size; // ivar: _size


+(id)initialState;
+(id)new;
+(id)newWithView:(*void)arg0 size:(struct CKComponentSize *)arg1 ;
-(*void)viewConfiguration;
-(?)animationsFromPreviousComponent;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)controller;
-(id)init;
-(id)initWithView:(*void)arg0 size:(struct CKComponentSize *)arg1 ;
-(id)nextResponder;
-(id)nextResponderAfterController;
-(id)targetForAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)viewForAnimation;
-(struct CKComponentBoundsAnimation )boundsAnimationFromPreviousComponent:(id)arg0 ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 restrictedToSize:(struct CKComponentSize *)arg1 relativeToParentSize:(struct CGSize )arg2 ;
-(struct CKComponentLayout )layoutThatFits:(struct CKSizeRange )arg0 parentSize:(struct CGSize )arg1 ;
-(struct CKComponentViewContext )viewContext;
-(struct MountResult )mountInContext:(*void)arg0 size:(struct CGSize )arg1 children:(struct shared_ptr<const std::vector<CKComponentLayoutChild>> )arg2 supercomponent:(id)arg3 ;
-(struct vector<CKComponentAnimation, std::allocator<CKComponentAnimation>> )animationsOnInitialMount;
-(void)_relinquishMountedView;
-(void)childrenDidMount;
-(void)dealloc;
-(void)unmount;
// -(void)updateState:(id)arg0 mode:(unk)arg1  ;
-(void)wf_applyVisualStying:(id)arg0 ;


@end


#endif