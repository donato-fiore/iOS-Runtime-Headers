// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UINAVIGATIONBARGESTUREHANDLER_H
#define _UINAVIGATIONBARGESTUREHANDLER_H

@class NSString;
@protocol UIGestureRecognizerDelegatePrivate, _UINavigationBarGestureHandlerDelegate;

#import <Foundation/Foundation.h>

#import "UISwipeGestureRecognizer.h"
#import "UINavigationBar.h"

@interface _UINavigationBarGestureHandler : NSObject <UIGestureRecognizerDelegatePrivate>

 {
    UISwipeGestureRecognizer *_popSwipeGestureRecognizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UINavigationBarGestureHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger idiom; // ivar: _idiom
@property (readonly, weak, nonatomic) UINavigationBar *navigationBar; // ivar: _navigationBar
@property (readonly) Class superclass;


-(BOOL)_gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithNavigationBar:(id)arg0 ;
-(void)_handlePopSwipe:(id)arg0 ;


@end


#endif