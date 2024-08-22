// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKBALLOONCHATITEM_H
#define CKBALLOONCHATITEM_H

@class NSDate;


#import "CKChatItem.h"
#import "CKEntity.h"

@interface CKBalloonChatItem : CKChatItem {
    CKEntity *_entity;
}


@property (readonly, nonatomic) NSUInteger balloonCorners;
@property (readonly, nonatomic) char balloonOrientation;
@property (readonly, nonatomic) char balloonShape;
@property (readonly, nonatomic) Class balloonViewClass;
@property (readonly, nonatomic) BOOL failed;
@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property (readonly, nonatomic) Class impactBalloonViewClass;
@property (readonly, nonatomic) BOOL isBlackholed;
@property (readonly, nonatomic) BOOL isMultilineText; // ivar: _isMultilineText
@property (readonly, nonatomic) BOOL shouldCacheSize;
@property (readonly, nonatomic) char tailShape;
@property (readonly, nonatomic) NSDate *time;


+(CGFloat)resultingMaxWidthWithBalloonMaxWidth:(CGFloat)arg0 fullMaxWidth:(CGFloat)arg1 transcriptTraitCollection:(id)arg2 ;
-(BOOL)canBeSelectedInEditMode;
-(BOOL)displayDuringSend;
-(BOOL)needsAdjustedTextAlignmentInsets;
-(BOOL)needsPreservedAspectRatio;
-(BOOL)wantsDrawerLayout;
-(Class)cellClass;
-(NSUInteger)layoutType;
-(char)transcriptOrientation;
-(id)cellIdentifier;
-(id)contact;
-(id)description;
-(id)loadTranscriptDrawerText;
-(id)sender;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct CKBalloonDescriptor_t )balloonDescriptor;
-(struct UIEdgeInsets )contentInsets;
-(struct UIEdgeInsets )transcriptTextAlignmentInsets;
-(void)configureBalloonView:(id)arg0 ;


@end


#endif