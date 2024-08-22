// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCONTINUITYPAYMENTCARDSUMMARYVIEW_H
#define PKCONTINUITYPAYMENTCARDSUMMARYVIEW_H

@class UIView, UIImageView, UILabel, NSLayoutConstraint, NSMutableArray, NSString;



@interface PKContinuityPaymentCardSummaryView : UIView {
    UIImageView *_alertView;
    UILabel *_descriptionView;
    UILabel *_subtitleView;
    NSLayoutConstraint *_textToTrailingConstraint;
    NSLayoutConstraint *_textToAlertConstraint;
    NSMutableArray *_singleLineConstraints;
    NSMutableArray *_subtitleConstraints;
}


@property (copy, nonatomic) NSString *cardDescription; // ivar: _cardDescription
@property (nonatomic) BOOL showsAlert; // ivar: _showsAlert
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (nonatomic) BOOL subtitleDescribesError; // ivar: _subtitleDescribesError
@property (readonly, nonatomic) UIImageView *thumbnailView; // ivar: _thumbnailView


-(id)_formatTextForString:(id)arg0 alerting:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_createLabels;
-(void)_createSubviews;
-(void)_prepareImageAndValueConstraints;
-(void)updateConstraints;


@end


#endif