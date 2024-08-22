// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSWINDOW_H
#define CPSWINDOW_H

@class UIWindow, NSHashTable;



@interface CPSWindow : UIWindow

@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers


-(BOOL)_isKeyWindowForDeferral;
-(void)addEventObserver:(id)arg0 ;
-(void)removeEventObserver:(id)arg0 ;
-(void)sendEvent:(id)arg0 ;


@end


#endif