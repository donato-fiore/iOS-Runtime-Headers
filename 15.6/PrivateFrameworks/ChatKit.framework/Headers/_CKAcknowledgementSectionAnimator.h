// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CKACKNOWLEDGEMENTSECTIONANIMATOR_H
#define _CKACKNOWLEDGEMENTSECTIONANIMATOR_H

@class UIImageView, UICollectionViewLayoutAttributes, CNAvatarView, UIView, UILabel;

#import <Foundation/Foundation.h>

#import "CKEntity.h"

@interface _CKAcknowledgementSectionAnimator : NSObject

@property (retain, nonatomic) UIImageView *ackIconView; // ivar: _ackIconView
@property (retain, nonatomic) UICollectionViewLayoutAttributes *ackIconViewAttr; // ivar: _ackIconViewAttr
@property (nonatomic) NSUInteger ackVoteCount; // ivar: _ackVoteCount
@property (nonatomic) NSInteger acknowledgmentType; // ivar: _acknowledgmentType
@property (retain, nonatomic) CNAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) UICollectionViewLayoutAttributes *avatarViewAttr; // ivar: _avatarViewAttr
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) CKEntity *entityToShow; // ivar: _entityToShow
@property (retain, nonatomic) UILabel *voteCountLabel; // ivar: _voteCountLabel
@property (retain, nonatomic) UICollectionViewLayoutAttributes *voteCountViewAttr; // ivar: _voteCountViewAttr


-(void)_updateAckIconViewDelayTime:(CGFloat)arg0 ;
-(void)_updateAvatarViewDelayTime:(CGFloat)arg0 ;
-(void)_updateVoteCountViewDelayTime:(CGFloat)arg0 ;
-(void)animateInAckIconView:(CGFloat)arg0 ;
-(void)dealloc;
-(void)insertAvatarDelayTime:(CGFloat)arg0 ;


@end


#endif