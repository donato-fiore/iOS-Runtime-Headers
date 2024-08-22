// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTYPINGPLUGINCHATITEM_H
#define CKTYPINGPLUGINCHATITEM_H

@class NSString, NSData;


#import "CKTypingChatItem.h"

@interface CKTypingPluginChatItem : CKTypingChatItem

@property (copy, nonatomic) NSString *plugInBundleID; // ivar: _plugInBundleID
@property (readonly, nonatomic) NSData *typingIndicatorData; // ivar: _typingIndicatorData


-(Class)cellClass;
-(id)iconImage;
-(id)indicatorLayer;
-(id)initWithIMChatItem:(id)arg0 maxWidth:(CGFloat)arg1 ;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;


@end


#endif