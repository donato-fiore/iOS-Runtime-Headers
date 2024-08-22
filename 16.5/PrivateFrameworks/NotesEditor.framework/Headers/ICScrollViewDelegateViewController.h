// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSCROLLVIEWDELEGATEVIEWCONTROLLER_H
#define ICSCROLLVIEWDELEGATEVIEWCONTROLLER_H

@class ICNAViewController, NotesBackgroundView, NSString, UIScrollView, ICScrollViewKeyboardResizer;
@protocol UIScrollViewDelegate, ICScrollViewKeyboardResizerDelegate;



@interface ICScrollViewDelegateViewController : ICNAViewController <UIScrollViewDelegate, ICScrollViewKeyboardResizerDelegate>



@property (readonly, nonatomic) NotesBackgroundView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIScrollView *keyboardResizerScrollView;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) ICScrollViewKeyboardResizer *scrollViewResizer; // ivar: _scrollViewResizer
@property (readonly) Class superclass;


-(CGFloat)consumedBottomAreaForResizer:(id)arg0 ;
-(CGFloat)topInsetForResizer:(id)arg0 ;
-(void)setupScrollViewKeyboardResizer;
-(void)viewDidLayoutSubviews;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif