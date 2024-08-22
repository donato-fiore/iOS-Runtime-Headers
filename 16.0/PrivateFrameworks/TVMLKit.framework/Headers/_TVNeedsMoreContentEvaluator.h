// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVNEEDSMORECONTENTEVALUATOR_H
#define _TVNEEDSMORECONTENTEVALUATOR_H

@class UIScrollView, IKViewElement;

#import <Foundation/Foundation.h>


@interface _TVNeedsMoreContentEvaluator : NSObject

@property (readonly, nonatomic) NSInteger axis; // ivar: _axis
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) CGFloat threshold; // ivar: _threshold
@property (retain, nonatomic) IKViewElement *viewElement; // ivar: _viewElement


-(id)init;
-(id)initWithScrollView:(id)arg0 axis:(NSInteger)arg1 ;
-(void)evaluateForState:(NSInteger)arg0 ;
-(void)reset;


@end


#endif