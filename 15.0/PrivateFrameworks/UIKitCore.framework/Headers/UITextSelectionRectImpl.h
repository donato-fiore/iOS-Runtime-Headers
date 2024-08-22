// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTSELECTIONRECTIMPL_H
#define UITEXTSELECTIONRECTIMPL_H

@class WebSelectionRect;


#import "UITextSelectionRect.h"

@interface UITextSelectionRectImpl : UITextSelectionRect

@property (retain, nonatomic) WebSelectionRect *webRect; // ivar: webRect


+(id)rectWithWebRect:(id)arg0 ;
+(id)rectsWithWebRects:(id)arg0 ;
-(BOOL)containsEnd;
-(BOOL)containsStart;
-(BOOL)isVertical;
-(NSInteger)writingDirection;
-(id)initWithWebRect:(id)arg0 ;
-(id)range;
-(struct CGRect )rect;
-(void)dealloc;


@end


#endif