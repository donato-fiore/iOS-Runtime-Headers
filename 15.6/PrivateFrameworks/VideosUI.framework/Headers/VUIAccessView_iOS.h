// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIACCESSVIEW_IOS_H
#define VUIACCESSVIEW_IOS_H

@class UIView, NSArray, UILayoutGuide, UIStackView, UILabel, UIScrollView, UIButton, _TVCarouselView, NSString;
@protocol TVCarouselViewDataSource;



@interface VUIAccessView_iOS : UIView <TVCarouselViewDataSource>

 {
    NSArray *_apps;
    UILayoutGuide *_titlePlacementGuide;
    UIStackView *_scrollStack;
    UILabel *_titleLabel;
    UIScrollView *_bodyScroll;
    UILabel *_bodyLabel;
    UILabel *_secondaryBodyLabel;
    UIStackView *_logoStack;
    UIStackView *_bottomStack;
    UIButton *_allowButton;
    UIButton *_nackButton;
    UIButton *_seeAllButton;
    _TVCarouselView *_carouselView;
    BOOL _didLayout;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(struct CGSize )iconSize;
-(NSUInteger)numberOfItemsInCarouselView:(id)arg0 ;
-(id)_buildCarousel;
-(id)_buildLogoStack;
-(id)_imageViewForIndex:(NSUInteger)arg0 ;
-(id)allowButton;
-(id)bodyScroll;
-(id)carouselView:(id)arg0 cellForItemAtIndex:(NSUInteger)arg1 ;
-(id)initWithApps:(id)arg0 ;
-(id)nackButton;
-(id)seeAllButton;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setBody:(id)arg0 ;
-(void)setSecondaryBody:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)showNackScreen;


@end


#endif