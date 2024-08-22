// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCMODALVIEWINTERACTION_H
#define ASCMODALVIEWINTERACTION_H

@class NSMutableArray, UIView;

#import <Foundation/Foundation.h>

#import "ASCModalViewGestureRecognizer.h"

@interface ASCModalViewInteraction : NSObject

@property (copy, nonatomic) id *cancelBlock; // ivar: _cancelBlock
@property (retain, nonatomic) ASCModalViewGestureRecognizer *cancelGestureRecognizer; // ivar: _cancelGestureRecognizer
@property (readonly, nonatomic) NSMutableArray *observers; // ivar: _observers
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(id)initWithView:(id)arg0 ;
-(void)cancelGestureDidChange:(id)arg0 ;
-(void)dealloc;
-(void)installWithCancelBlock:(id)arg0 ;
-(void)invalidate;


@end


#endif