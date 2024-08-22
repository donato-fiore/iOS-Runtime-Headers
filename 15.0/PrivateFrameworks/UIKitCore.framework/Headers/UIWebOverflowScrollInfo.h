// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIWEBOVERFLOWSCROLLINFO_H
#define UIWEBOVERFLOWSCROLLINFO_H

@class DOMNode;

#import <Foundation/Foundation.h>


@interface UIWebOverflowScrollInfo : NSObject

@property (nonatomic) BOOL isUserScroll; // ivar: _isUserScroll
@property (retain, nonatomic) DOMNode *node; // ivar: _node
@property (nonatomic) CGPoint offset; // ivar: _offset


-(BOOL)coalesceScrollForNode:(id)arg0 offset:(struct CGPoint )arg1 isUserScroll:(BOOL)arg2 ;
-(id)initWithNode:(id)arg0 offset:(struct CGPoint )arg1 isUserScroll:(BOOL)arg2 ;
-(void)dealloc;


@end


#endif