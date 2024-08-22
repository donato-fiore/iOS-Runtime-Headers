// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WSBUNDLECOLLECTIONSTABLEVIEWCELL_H
#define WSBUNDLECOLLECTIONSTABLEVIEWCELL_H

@class UITableViewCell, NSMutableArray, UIStackView, NSString;
@protocol WSBundleCollectionOptionViewDelegate, WSBundleCollectionsTableViewCellDelegate;



@interface WSBundleCollectionsTableViewCell : UITableViewCell <WSBundleCollectionOptionViewDelegate>



@property (retain, nonatomic) NSMutableArray *_optionViews; // ivar: __optionViews
@property (retain, nonatomic) UIStackView *_stackView; // ivar: __stackView
@property (nonatomic) CGSize canonicalButtonSize; // ivar: _canonicalButtonSize
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WSBundleCollectionsTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_configureView;
-(void)addViewForBundleCollection:(id)arg0 ;
-(void)userDidTapBundleCollectionOptionView:(id)arg0 ;


@end


#endif