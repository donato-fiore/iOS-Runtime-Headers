// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCOMPONENTDELEGATEFORWARDER_H
#define CKCOMPONENTDELEGATEFORWARDER_H

@class UIView;

#import <Foundation/Foundation.h>


@interface CKComponentDelegateForwarder : NSObject {
    vector<SEL *, std::allocator<SEL *>> _selectors;
}


@property (weak, nonatomic) UIView *view; // ivar: _view


+(id)newWithSelectors:(struct vector<SEL *, std::allocator<SEL *>> )arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_doNothing;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif