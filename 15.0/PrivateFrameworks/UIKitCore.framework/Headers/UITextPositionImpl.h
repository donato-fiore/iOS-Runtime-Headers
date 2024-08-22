// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTPOSITIONIMPL_H
#define UITEXTPOSITIONIMPL_H

@class WebVisiblePosition;


#import "UITextPosition.h"

@interface UITextPositionImpl : UITextPosition

@property (retain, nonatomic) WebVisiblePosition *webVisiblePosition; // ivar: _webVisiblePosition


+(id)wrapWebVisiblePosition:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif