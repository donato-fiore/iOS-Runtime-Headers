// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMESSAGEPARTHIGHLIGHTCHATITEM_H
#define CKMESSAGEPARTHIGHLIGHTCHATITEM_H

@class NSString;


#import "CKAssociatedMessageChatItem.h"

@interface CKMessagePartHighlightChatItem : CKAssociatedMessageChatItem

@property (readonly, nonatomic) NSString *timestampString; // ivar: _timestampString


-(BOOL)failed;
-(BOOL)isFromMe;
-(BOOL)parentMessageIsFromMe;
-(BOOL)wantsDrawerLayout;
-(Class)balloonViewClass;
-(Class)cellClass;
-(char)balloonOrientation;
-(char)transcriptOrientation;
-(id)associatedChatItemGUID;
-(id)guid;
-(id)initWithIMChatItem:(id)arg0 maxWidth:(CGFloat)arg1 ;
-(id)messagePartHighlightChatItem;
-(id)sender;
-(id)time;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct IMAssociatedMessageGeometryDescriptor )geometryDescriptor;
-(struct UIEdgeInsets )contentInsets;
-(struct _NSRange )associatedMessageRange;


@end


#endif