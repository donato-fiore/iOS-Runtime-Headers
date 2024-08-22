// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REUPNEXTLARGETEXTCELL_H
#define REUPNEXTLARGETEXTCELL_H

@class UIFont, UILayoutGuide, UILabel, UIVisualEffectView, NSArray;


#import "REUpNextBaseCell.h"
#import "REUpNextImageView.h"

@interface REUpNextLargeTextCell : REUpNextBaseCell {
    BOOL _showingHeaderImage;
    BOOL _showingBodyImage;
    unsigned int _currentImageEdge;
    UIFont *_standardBodyFont;
    UIFont *_monospaceBodyFont;
    UILayoutGuide *_contentLayoutGuide;
    REUpNextImageView *_headerImage;
    REUpNextImageView *_bodyImage;
    UILabel *_headerLabel;
    UILabel *_bodyLabel;
    UIVisualEffectView *_headerVisualEffectView;
    UIVisualEffectView *_bodyVisualEffectView;
    UIVisualEffectView *_headerImageVisualEffectView;
    NSArray *_headerWithLeftImageConstraints;
    NSArray *_headerWithRightImageConstraints;
    NSArray *_headerWithNoImageConstraints;
    NSArray *_bodyWithLeftImageConstraints;
    NSArray *_bodyWithNoImageConstraints;
}




+(void)initialize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)primaryEffectViews;
-(id)secondaryEffectViews;
-(void)_updateHeaderColor;
-(void)configureWithContent:(id)arg0 ;
-(void)defaultTextColorDidChange;
-(void)updateConstraints;


@end


#endif