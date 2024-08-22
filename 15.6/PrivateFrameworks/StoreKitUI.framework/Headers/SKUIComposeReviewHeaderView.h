// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUICOMPOSEREVIEWHEADERVIEW_H
#define SKUICOMPOSEREVIEWHEADERVIEW_H

@class UIView, SKStarRatingControl, NSString, UIResponder;
@protocol SKUIComposeTextFieldListViewDelegate, SKUIComposeReviewHeaderDelegate;


#import "SKUIComposeTextFieldListView.h"
#import "SKUIReviewMetadata.h"

@interface SKUIComposeReviewHeaderView : UIView <SKUIComposeTextFieldListViewDelegate>

 {
    SKStarRatingControl *_ratingControl;
    SKUIComposeTextFieldListView *_textFieldListView;
}


@property (readonly, nonatomic) NSInteger composeReviewStyle; // ivar: _style
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIComposeReviewHeaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIResponder *initialFirstResponder;
@property (nonatomic) float rating;
@property (retain, nonatomic) SKUIReviewMetadata *review; // ivar: _review
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;


-(NSInteger)numberOfColumnsInTextFieldList:(id)arg0 ;
-(NSInteger)numberOfFieldsInTextFieldList:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(id)textFieldList:(id)arg0 configurationForFieldAtIndex:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)textFieldListValidityDidChange:(id)arg0 ;
-(void)textFieldListValuesDidChange:(id)arg0 ;


@end


#endif