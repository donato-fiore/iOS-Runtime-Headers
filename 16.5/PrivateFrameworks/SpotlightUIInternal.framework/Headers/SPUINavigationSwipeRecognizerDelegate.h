// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPUINAVIGATIONSWIPERECOGNIZERDELEGATE_H
#define SPUINAVIGATIONSWIPERECOGNIZERDELEGATE_H

@class NSString, UINavigationController;
@protocol UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface SPUINavigationSwipeRecognizerDelegate : NSObject <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) UINavigationController *navigationController; // ivar: _navigationController
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithNavigationController:(id)arg0 ;


@end


#endif