// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFAVATARSTACKVIEW_H
#define SFAVATARSTACKVIEW_H

@class UIView, NSMutableDictionary, UILabel, NSArray;



@interface SFAvatarStackView : UIView {
    NSMutableDictionary *_avatarViewControllersByParticipantIdentifier;
    NSMutableDictionary *_contactsByParticipantIdentifer;
    UIView *_overflowView;
    UILabel *_overflowLabel;
    NSArray *_visibleParticipantIdentifiers;
}


@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (nonatomic) CGFloat avatarDiameter; // ivar: _avatarDiameter
@property (copy, nonatomic) NSArray *shareParticipants; // ivar: _shareParticipants
@property (nonatomic) CGFloat spacing; // ivar: _spacing


+(id)randomContactIdentifiers;
-(CGFloat)_widthForParticipantCount:(NSInteger)arg0 ;
-(id)_avatarViewControllerForParticipantIdentifier:(id)arg0 ;
-(id)_overflowLabel;
-(id)_overflowView;
-(id)_viewForParticipantIdentifier:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_contentRectForContentWidth:(CGFloat)arg0 viewWith:(CGFloat)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeForParticipantCount:(NSInteger)arg0 ;
-(void)_layOutIndexes:(id)arg0 ofParticipantIdentifiers:(id)arg1 targetWidth:(id)arg2 ;
-(void)_loadOverflowView;
-(void)_removeViewsForIndexes:(id)arg0 ofParticipantIdentifiers:(id)arg1 ;
-(void)_setIndexes:(id)arg0 ofParticipantIdentifiers:(id)arg1 transitioning:(BOOL)arg2 completion:(id)arg3 ;
-(void)_setVisibleParticipantIdentifiers:(id)arg0 ;
-(void)_updateVisibleParticipants;
-(void)layoutSubviews;


@end


#endif