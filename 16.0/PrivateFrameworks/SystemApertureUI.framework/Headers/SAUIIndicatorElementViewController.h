// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUIINDICATORELEMENTVIEWCONTROLLER_H
#define SAUIINDICATORELEMENTVIEWCONTROLLER_H

@class UIViewController, NSHashTable, NSString;
@protocol SAUIElementViewControlling, SAUIIndicatorElementViewProviding, SAUILayoutHosting;



@interface SAUIIndicatorElementViewController : UIViewController <SAUIElementViewControlling>

 {
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SAUIIndicatorElementViewProviding> *elementViewProvider; // ivar: _elementViewProvider
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SAUILayoutHosting> *layoutHost; // ivar: _layoutHost
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)_canShowWhileLocked;
-(BOOL)handleLongPress:(id)arg0 ;
-(BOOL)handleTap:(id)arg0 ;
-(id)initWithIndicatorElementViewProvider:(id)arg0 ;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg0 usingBlock:(id)arg1 ;
-(void)addElementViewControllingObserver:(id)arg0 ;
-(void)removeElementViewControllingObserver:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif