// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKOUTSIDETAPWINDOWCALLBACKS_H
#define _HKOUTSIDETAPWINDOWCALLBACKS_H

@class NSMutableArray, NSString, UITapGestureRecognizer, UIWindow;
@protocol UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface _HKOutsideTapWindowCallbacks : NSObject <UIGestureRecognizerDelegate>



@property (retain, nonatomic) NSMutableArray *callbacks; // ivar: _callbacks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITapGestureRecognizer *recognizer; // ivar: _recognizer
@property (readonly) Class superclass;
@property (weak, nonatomic) UIWindow *window; // ivar: _window


-(BOOL)matchesWindow:(id)arg0 ;
-(id)initWithWindow:(id)arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)_installTapGestureRecognizerIfNeeded;
-(void)_removeTapGestureRecognizerIfNeeded;
-(void)addCallbackForView:(id)arg0 outsideTapBlock:(id)arg1 ;
-(void)removeCallbackForView:(id)arg0 ;


@end


#endif