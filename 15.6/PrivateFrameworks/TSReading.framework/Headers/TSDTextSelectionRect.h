// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDTEXTSELECTIONRECT_H
#define TSDTEXTSELECTIONRECT_H

@class UITextSelectionRect, UITextRange;



@interface TSDTextSelectionRect : UITextSelectionRect {
    CGRect _rect;
    NSInteger _writingDirection;
    BOOL _containsStart;
    BOOL _containsEnd;
    BOOL _isVertical;
}


@property (retain, nonatomic) UITextRange *range; // ivar: _range


-(BOOL)containsEnd;
-(BOOL)containsStart;
-(BOOL)isVertical;
-(NSInteger)writingDirection;
-(id)initWithRect:(struct CGRect )arg0 direction:(NSInteger)arg1 range:(id)arg2 containsStart:(BOOL)arg3 containsEnd:(BOOL)arg4 isVertical:(BOOL)arg5 ;
-(struct CGRect )rect;
-(void)dealloc;


@end


#endif