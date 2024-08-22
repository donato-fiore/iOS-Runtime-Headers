// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTLISTDUPLICATESBANNERVIEW_H
#define CNCONTACTLISTDUPLICATESBANNERVIEW_H

@class UIView, UILabel;
@protocol CNContactListDuplicatesBannerViewDelegate;



@interface CNContactListDuplicatesBannerView : UIView

@property (weak, nonatomic) NSObject<CNContactListDuplicatesBannerViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger duplicatesCount; // ivar: _duplicatesCount
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)countStringForLocalizedStringKey:(id)arg0 count:(NSInteger)arg1 ;
-(id)initWithDuplicatesCount:(NSInteger)arg0 ;
-(void)didTapDismiss;
-(void)didTapViewDuplicates;
-(void)setupSubviews;


@end


#endif