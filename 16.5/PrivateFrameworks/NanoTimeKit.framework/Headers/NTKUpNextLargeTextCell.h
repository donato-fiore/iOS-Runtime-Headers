// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKUPNEXTLARGETEXTCELL_H
#define NTKUPNEXTLARGETEXTCELL_H

@class CLKFont, UILayoutGuide, CLKUIColoringLabel, NSArray, NSString;
@protocol CLKMonochromeFilterProvider;


#import "NTKUpNextBaseCell.h"
#import "NTKUpNextImageView.h"

@interface NTKUpNextLargeTextCell : NTKUpNextBaseCell <CLKMonochromeFilterProvider>

 {
    BOOL _showingHeaderImage;
    BOOL _showingBodyImage;
    unsigned int _currentImageEdge;
    CLKFont *_standardBodyFont;
    CLKFont *_monospaceBodyFont;
    UILayoutGuide *_contentLayoutGuide;
    NTKUpNextImageView *_headerImage;
    NTKUpNextImageView *_bodyImage;
    CLKUIColoringLabel *_headerLabel;
    CLKUIColoringLabel *_bodyLabel;
    NSArray *_headerWithLeftImageConstraints;
    NSArray *_headerWithRightImageConstraints;
    NSArray *_headerWithNoImageConstraints;
    NSArray *_bodyWithLeftImageConstraints;
    NSArray *_bodyWithNoImageConstraints;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)colorForView:(id)arg0 accented:(BOOL)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(id)filtersForView:(id)arg0 style:(NSInteger)arg1 ;
-(id)filtersForView:(id)arg0 style:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithContent:(id)arg0 ;
-(void)prepareForReuse;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateConstraints;
-(void)updateMonochromeColor;


@end


#endif