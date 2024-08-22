// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCOMPACTNAVIGATIONCONTAINEDNAVIGATIONCONTROLLER_H
#define PKCOMPACTNAVIGATIONCONTAINEDNAVIGATIONCONTROLLER_H

@class UINavigationController, UIVisualEffectView, NSHashTable, NSString;
@protocol PKObservableContentContainer;



@interface PKCompactNavigationContainedNavigationController : UINavigationController <PKObservableContentContainer>

 {
    UIVisualEffectView *_backdropView;
    os_unfair_lock_s _observersLock;
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize preferredContentSize;
@property (readonly, nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(id)_observers;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSUInteger)arg0 ;
-(void)addContentContainerObserver:(id)arg0 ;
-(void)loadView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)removeContentContainerObserver:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif