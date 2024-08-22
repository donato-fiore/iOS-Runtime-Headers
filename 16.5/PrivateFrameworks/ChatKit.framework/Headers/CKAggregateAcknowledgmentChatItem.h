// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKAGGREGATEACKNOWLEDGMENTCHATITEM_H
#define CKAGGREGATEACKNOWLEDGMENTCHATITEM_H

@class UIColor, NSString, NSArray;


#import "CKAssociatedMessageChatItem.h"

@interface CKAggregateAcknowledgmentChatItem : CKAssociatedMessageChatItem

@property (readonly) UIColor *acknowledgmentImageColor;
@property (readonly, copy) NSString *acknowledgmentImageName;
@property (readonly, copy, nonatomic) NSArray *acknowledgments;
@property (readonly, nonatomic) char balloonOrientation;
@property (readonly) Class balloonViewClass;
@property (readonly, nonatomic) NSInteger fromMeAcknowledgmentType;
@property (readonly, nonatomic) BOOL includesFromMe;
@property (readonly, nonatomic) BOOL includesMultiple;
@property (readonly, nonatomic) NSInteger latestAcknowledgmentType; // ivar: _latestAcknowledgmentType
@property (readonly, nonatomic) BOOL latestIsFromMe;
@property (nonatomic) BOOL overrideBalloonOrientationForPhotoGrid; // ivar: _overrideBalloonOrientationForPhotoGrid
@property (readonly, copy, nonatomic) NSString *serviceName;


-(BOOL)isEqual:(id)arg0 ;
-(Class)cellClass;
-(char)transcriptOrientation;
-(id)_imAggregateAcknowledgmentChatItem;
-(id)associatedChatItemGUID;
-(id)initWithIMChatItem:(id)arg0 maxWidth:(CGFloat)arg1 ;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct UIEdgeInsets )contentInsets;


@end


#endif