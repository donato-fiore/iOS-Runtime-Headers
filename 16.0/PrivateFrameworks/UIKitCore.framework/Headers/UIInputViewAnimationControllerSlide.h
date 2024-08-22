// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINPUTVIEWANIMATIONCONTROLLERSLIDE_H
#define UIINPUTVIEWANIMATIONCONTROLLERSLIDE_H

@class NSString;
@protocol UIInputViewAnimationController;

#import <Foundation/Foundation.h>


@interface UIInputViewAnimationControllerSlide : NSObject <UIInputViewAnimationController>

 {
    int _slide;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSlide:(int)arg0 ;
-(id)placementForSlideStart:(BOOL)arg0 ;
-(id)prepareAnimationWithHost:(id)arg0 startPlacement:(id)arg1 endPlacement:(id)arg2 ;
-(void)completeAnimationWithHost:(id)arg0 context:(id)arg1 ;
-(void)performAnimationWithHost:(id)arg0 context:(id)arg1 ;


@end


#endif