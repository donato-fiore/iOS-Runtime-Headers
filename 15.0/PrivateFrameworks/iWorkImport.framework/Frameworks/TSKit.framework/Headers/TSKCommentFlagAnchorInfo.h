// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKCOMMENTFLAGANCHORINFO_H
#define TSKCOMMENTFLAGANCHORINFO_H


#import <Foundation/Foundation.h>


@interface TSKCommentFlagAnchorInfo : NSObject

@property (nonatomic) BOOL isVertical; // ivar: _isVertical
@property (nonatomic) CGPoint leftAnchor; // ivar: _leftAnchor
@property (nonatomic) CGPoint rightAnchor; // ivar: _rightAnchor


-(id)initWithLeftAnchor:(struct CGPoint )arg0 rightAnchor:(struct CGPoint )arg1 isVertical:(BOOL)arg2 ;


@end


#endif