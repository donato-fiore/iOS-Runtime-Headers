// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI20DYNAMICTYPETEXTFIELD_H
#define _TTC12GAMECENTERUI20DYNAMICTYPETEXTFIELD_H

@class UITextField, UIFont;



@interface _TtC12GameCenterUI20DynamicTypeTextField : UITextField {
    ? fontUseCaseContentSizeCategory;
    ? fontUseCase;
    ? directionalTextAlignment;
}


@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) BOOL jet_isTextExtraTall;
@property (nonatomic, readonly) UIEdgeInsets jet_languageAwareOutsets;
@property (nonatomic, readonly) NSInteger jet_textLength;
@property (nonatomic) NSInteger textAlignment;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif