// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKLOCATINGCHATITEM_H
#define CKLOCATINGCHATITEM_H

@class NSString;


#import "CKBalloonChatItem.h"

@interface CKLocatingChatItem : CKBalloonChatItem

@property (readonly, copy, nonatomic) NSString *locationText;


-(BOOL)failed;
-(BOOL)isFromMe;
-(Class)balloonViewClass;
-(id)description;
-(id)message;
-(id)sender;
-(id)time;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(void)configureBalloonView:(id)arg0 ;


@end


#endif