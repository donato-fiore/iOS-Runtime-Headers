// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKINPUTVIEW_H
#define CKINPUTVIEW_H

@class UIInputView;



@interface CKInputView : UIInputView

@property (nonatomic) CGSize lastContentSize; // ivar: _lastContentSize
@property (nonatomic) NSInteger lastContentSizeInterfaceOrientation; // ivar: _lastContentSizeInterfaceOrientation


+(struct CGSize )defaultContentSize;
+(struct CGSize )defaultContentSizeLargerThanKeyboard:(*BOOL)arg0 ;
-(struct CGSize )intrinsicContentSize;


@end


#endif