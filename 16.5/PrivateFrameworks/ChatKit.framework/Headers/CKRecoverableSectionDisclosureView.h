// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKRECOVERABLESECTIONDISCLOSUREVIEW_H
#define CKRECOVERABLESECTIONDISCLOSUREVIEW_H

@class UICollectionReusableView, UITextView;



@interface CKRecoverableSectionDisclosureView : UICollectionReusableView

@property (retain, nonatomic) UITextView *disclosureView; // ivar: _disclosureView


+(id)reuseIdentifier;
-(id)_disclosureAttributedText:(id)arg0 ;
-(id)_junkFilteringDisclosureAttributedText;
-(id)_recentlyDeletedDisclosureAttributedText;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureForJunkFiltering;
-(void)configureForRecentlyDeleted;


@end


#endif