// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKGROUPUPDATEBANNERVIEW_H
#define CKGROUPUPDATEBANNERVIEW_H

@class NSArray;


#import "CKUpdateBannerView.h"

@interface CKGroupUpdateBannerView : CKUpdateBannerView

@property (retain, nonatomic) NSArray *groupUpdates; // ivar: _groupUpdates
@property (nonatomic) NSUInteger updateBannerType; // ivar: _updateBannerType


-(CGFloat)maxLabelWidthForSize:(struct CGSize )arg0 ;
-(CGFloat)titleLabelAlignmentX;
-(id)cancelGlyph;
-(id)getContactDisplayName:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSUInteger)arg1 useNamedTitles:(BOOL)arg2 updates:(id)arg3 inUpdatesMode:(BOOL)arg4 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )layoutMargins;
-(void)_updateAvatarView;
-(void)_updateSubtitleLabel;
-(void)_updateTitleLabel;
-(void)cancelButtonTapped:(id)arg0 ;


@end


#endif