// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIACTIVITYCONTENTSECTIONFOOTERVIEW_H
#define _UIACTIVITYCONTENTSECTIONFOOTERVIEW_H

@class UICollectionReusableView, NSString, UITextView;
@protocol UITextViewDelegate;



@interface _UIActivityContentSectionFooterView : UICollectionReusableView <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITextView *footerTextView; // ivar: _footerTextView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif