// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXVERTICALSWIPEGESTURERECOGNIZERHELPER_H
#define PXVERTICALSWIPEGESTURERECOGNIZERHELPER_H

@class NSMapTable;
@protocol PXVerticalSwipeGestureRecognizerHelperDelegate;

#import <Foundation/Foundation.h>


@interface PXVerticalSwipeGestureRecognizerHelper : NSObject {
    ? _delegateRespondsTo;
}


@property (nonatomic) BOOL allowSwipeDown; // ivar: _allowSwipeDown
@property (nonatomic) BOOL allowSwipeUp; // ivar: _allowSwipeUp
@property (weak, nonatomic) NSObject<PXVerticalSwipeGestureRecognizerHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSMapTable *dependentScrollViews; // ivar: _dependentScrollViews


-(BOOL)verticalSwipeGestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)verticalSwipeGestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)verticalSwipeGestureRecognizerShouldBegin:(id)arg0 ignoringScrollViews:(BOOL)arg1 ;
-(id)_panGestureRecognizerForVerticalSwipeGestureRecognizer:(id)arg0 ;
-(id)init;


@end


#endif