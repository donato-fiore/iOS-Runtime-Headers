// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAFAMILYSHARINGFEATURESVIEW_H
#define FAFAMILYSHARINGFEATURESVIEW_H

@class UIView, UIButton, UIStackView;



@interface FAFamilySharingFeaturesView : UIView {
    NSInteger _context;
    UIButton *_learnMoreButton;
    BOOL _shouldHideLocationSharing;
    UIStackView *_stack;
}




+(id)rowForIcon:(id)arg0 andLabel:(id)arg1 ;
-(id)_contextSensitiveLocalizedStringWithKey:(id)arg0 ;
-(id)_imageViewWithIconNamed:(id)arg0 addBorder:(BOOL)arg1 ;
-(id)_labelWithStringAtKey:(id)arg0 ;
-(id)initWithContext:(NSInteger)arg0 hideLocationSharing:(BOOL)arg1 ;
-(void)_learnMoreButtonTapped:(id)arg0 ;
-(void)_updateFonts;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif