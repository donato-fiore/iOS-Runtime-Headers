// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFPRIVACYREPORTEXPLANATIONDETAILITEMVIEW_H
#define SFPRIVACYREPORTEXPLANATIONDETAILITEMVIEW_H

@class UIView, NSLayoutConstraint, UITextView, NSString, UILabel;
@protocol SFPrivacyReportGridItem, UITextViewDelegate, SFPrivacyReportGridItemDelegate;



@interface SFPrivacyReportExplanationDetailItemView : UIView <SFPrivacyReportGridItem, UITextViewDelegate>

 {
    UIView *_hairline;
    NSLayoutConstraint *_titleTopConstraint;
    NSLayoutConstraint *_hairlineTopConstraint;
}


@property (readonly, nonatomic) UITextView *bodyTextView; // ivar: _bodyTextView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFPrivacyReportGridItemDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger gridPosition; // ivar: _gridPosition
@property (nonatomic) CGFloat hairlineTopSpacing; // ivar: _hairlineTopSpacing
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) CGFloat titleLabelTopSpacing; // ivar: _titleLabelTopSpacing
@property (nonatomic) BOOL usesInsetStyle; // ivar: _usesInsetStyle


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateTopConstraints;
-(void)_updateTopSpacing;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif