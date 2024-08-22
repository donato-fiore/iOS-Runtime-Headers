// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC11APPSTOREKIT16DYNAMICTYPELABEL_H
#define _TTC11APPSTOREKIT16DYNAMICTYPELABEL_H

@class UILabel, NSAttributedString, UIFont;



@interface _TtC11AppStoreKit16DynamicTypeLabel : UILabel {
    ? fontUseCaseContentSizeCategory;
    ? fontUseCase;
    ? wantsFastBaselineMeasurement;
    ? directionalTextAlignment;
}


@property (nonatomic, retain) NSAttributedString *attributedText;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) NSInteger textAlignment;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif