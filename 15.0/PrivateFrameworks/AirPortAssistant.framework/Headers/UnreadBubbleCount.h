// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNREADBUBBLECOUNT_H
#define UNREADBUBBLECOUNT_H

@class UIView;



@interface UnreadBubbleCount : UIView {
    CGSize _textSize;
}


@property (nonatomic) NSInteger count; // ivar: _count
@property (nonatomic) BOOL isSelected; // ivar: _isSelected


+(int)initImageCache;
+(void)deallocImageCache;
-(BOOL)isHighlighted;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)calculateTextMetrics;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif