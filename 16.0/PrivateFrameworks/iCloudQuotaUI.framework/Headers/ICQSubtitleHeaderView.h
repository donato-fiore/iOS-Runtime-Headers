// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQSUBTITLEHEADERVIEW_H
#define ICQSUBTITLEHEADERVIEW_H

@class UIView, NSArray, UILabel;
@protocol PSHeaderFooterView;



@interface ICQSubtitleHeaderView : UIView <PSHeaderFooterView>



@property (retain, nonatomic) NSArray *subtitleLabels; // ivar: _subtitleLabels
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)addSubtitle;
-(id)initWithSpecifier:(id)arg0 ;
-(id)subtitleAtIndex:(NSUInteger)arg0 ;
-(void)layoutSubviews;
-(void)removeSubtitleAtIndex:(NSUInteger)arg0 ;


@end


#endif