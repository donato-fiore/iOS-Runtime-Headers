// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKBLURREDNAVIGATIONCONTROLLER_H
#define PKBLURREDNAVIGATIONCONTROLLER_H

@class UINavigationController, UIVisualEffectView, NSHashTable, NSString;
@protocol PKObservableContentContainer;



@interface PKBlurredNavigationController : UINavigationController <PKObservableContentContainer>

 {
    UIVisualEffectView *_backdropView;
    os_unfair_lock_s _observersLock;
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize preferredContentSize;
@property (readonly) Class superclass;


-(id)_observers;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)addContentContainerObserver:(id)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)removeContentContainerObserver:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif