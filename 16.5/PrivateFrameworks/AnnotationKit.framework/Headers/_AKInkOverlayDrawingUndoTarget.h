// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AKINKOVERLAYDRAWINGUNDOTARGET_H
#define _AKINKOVERLAYDRAWINGUNDOTARGET_H


#import <Foundation/Foundation.h>

#import "AKPageController.h"

@interface _AKInkOverlayDrawingUndoTarget : NSObject

@property (weak) AKPageController *pageController; // ivar: _pageController


-(id)initWithPageController:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif