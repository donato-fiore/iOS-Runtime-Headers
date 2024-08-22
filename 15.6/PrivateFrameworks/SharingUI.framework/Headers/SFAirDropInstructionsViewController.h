// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFAIRDROPINSTRUCTIONSVIEWCONTROLLER_H
#define SFAIRDROPINSTRUCTIONSVIEWCONTROLLER_H

@class UIViewController, NSString, UITextView;
@protocol SFCollectionViewDelegateLayout;


#import "SFCollectionViewLayout.h"
#import "SFAirDropActiveIconView.h"

@interface SFAirDropInstructionsViewController : UIViewController <SFCollectionViewDelegateLayout>

 {
    SFCollectionViewLayout *_collectionViewLayout;
    CGSize _minimumPreferredContentSize;
}


@property (readonly, nonatomic) SFAirDropActiveIconView *airDropActiveIconView; // ivar: _airDropActiveIconView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UITextView *instructionsTextView; // ivar: _instructionsTextView
@property (readonly) Class superclass;


-(CGFloat)_titleLabelHeight;
-(id)_airDropText;
-(id)_fontWithStyle:(id)arg0 maxSizeCategory:(id)arg1 traits:(unsigned int)arg2 ;
-(id)_instructionsBaseFormatString;
-(id)_instructionsText;
-(id)attributedStringWithTitle:(id)arg0 content:(id)arg1 ;
-(struct CGSize )_cachedPreferredItemSize;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 preferredSizeForItemAtIndexPath:(id)arg2 ;
-(void)_layoutiOSSubviews;
-(void)_updateFontSizes;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updatePreferredContentSize;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif