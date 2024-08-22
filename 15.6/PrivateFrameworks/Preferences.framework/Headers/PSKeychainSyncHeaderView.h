// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSKEYCHAINSYNCHEADERVIEW_H
#define PSKEYCHAINSYNCHEADERVIEW_H

@class UIView, UILabel;
@protocol PSHeaderFooterView;



@interface PSKeychainSyncHeaderView : UIView <PSHeaderFooterView>

 {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}


@property (nonatomic) BOOL usesCompactLayout; // ivar: _usesCompactLayout


-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(id)initWithSpecifier:(id)arg0 ;
-(void)layoutSubviews;
-(void)setDetailText:(id)arg0 ;
-(void)setTitleText:(id)arg0 ;


@end


#endif