// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLOCKABLESCROLLVIEW_H
#define BLOCKABLESCROLLVIEW_H

@class UIScrollView;
@protocol BlockableScrollViewDelegate;



@interface BlockableScrollView : UIScrollView

@property (weak, nonatomic) NSObject<BlockableScrollViewDelegate> *blockableDelegate; // ivar: _blockableDelegate
@property (nonatomic) BOOL isResizing; // ivar: _isResizing


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif