// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDRANGE_H
#define DDRANGE_H

@class DOMNode;

#import <Foundation/Foundation.h>


@interface DDRange : NSObject

@property (nonatomic) NSInteger endOffset; // ivar: _endOffset
@property (retain, nonatomic) DOMNode *node; // ivar: _node
@property (nonatomic) NSInteger startOffset; // ivar: _startOffset


+(id)rangeWithDOMRange:(id)arg0 ;
-(id)description;
-(id)initWithDOMRange:(id)arg0 ;
-(void)dealloc;


@end


#endif