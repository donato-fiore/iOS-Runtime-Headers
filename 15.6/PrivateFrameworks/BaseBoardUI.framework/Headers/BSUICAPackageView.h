// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSUICAPACKAGEVIEW_H
#define BSUICAPACKAGEVIEW_H

@class UIView, CAStateController, CALayer, NSString, NSDictionary, NSArray;
@protocol CAStateControllerDelegate;



@interface BSUICAPackageView : UIView <CAStateControllerDelegate>

 {
    CAStateController *_stateController;
    NSObject<CAStateControllerDelegate> *_stateControllerDelegate;
    CALayer *_rootLayer;
    CGSize _originalSize;
    NSString *_pendingCompletionToState;
    NSString *_pendingCompletionFromState;
    id *_pendingCompletion;
    NSDictionary *_publishedObjectMap;
}


@property (readonly, copy, nonatomic) NSArray *publishedObjectNames;
@property (weak, nonatomic) NSObject<CAStateControllerDelegate> *stateControllerDelegate;


-(BOOL)setState:(id)arg0 ;
-(BOOL)setState:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)setState:(id)arg0 animated:(BOOL)arg1 transitionSpeed:(CGFloat)arg2 completion:(id)arg3 ;
-(BOOL)setState:(id)arg0 onLayer:(id)arg1 animated:(BOOL)arg2 transitionSpeed:(CGFloat)arg3 completion:(id)arg4 ;
-(id)initWithPackageName:(id)arg0 inBundle:(id)arg1 ;
-(id)publishedObjectWithName:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)stateController:(id)arg0 didSetStateOfLayer:(id)arg1 ;
-(void)stateController:(id)arg0 transitionDidStart:(id)arg1 speed:(float)arg2 ;
-(void)stateController:(id)arg0 transitionDidStop:(id)arg1 completed:(BOOL)arg2 ;


@end


#endif