// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKTEXTITEMCONTAINERVIEWCONTROLLER_H
#define MKTEXTITEMCONTAINERVIEWCONTROLLER_H

@class UIViewController, UIStackView, NSArray;
@protocol GEOTextItemContainer;



@interface MKTextItemContainerViewController : UIViewController

@property (nonatomic) CGFloat maxWidth; // ivar: _maxWidth
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly, nonatomic) NSObject<GEOTextItemContainer> *textItemContainer; // ivar: _textItemContainer
@property (copy, nonatomic) NSArray *textItemViews; // ivar: _textItemViews


-(BOOL)_canShowWhileLocked;
-(CGFloat)currentMaxWidth;
-(id)initWithTextItemContainer:(id)arg0 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)infoCardThemeChanged;
-(void)setupSubviewsWithMaxWidth:(CGFloat)arg0 ;
-(void)updateUIForTheme:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif