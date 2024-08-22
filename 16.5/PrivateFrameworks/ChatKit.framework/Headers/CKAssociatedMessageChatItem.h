// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKASSOCIATEDMESSAGECHATITEM_H
#define CKASSOCIATEDMESSAGECHATITEM_H

@class NSString, NSDate;


#import "CKChatItem.h"

@interface CKAssociatedMessageChatItem : CKChatItem

@property (readonly, nonatomic) NSString *associatedChatItemGUID;
@property (readonly, nonatomic) _NSRange associatedMessageRange;
@property (readonly, nonatomic) BOOL failed;
@property (readonly, nonatomic) IMAssociatedMessageGeometryDescriptor geometryDescriptor;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) BOOL parentMessageIsFromMe;
@property (readonly, nonatomic) NSDate *time;
@property (copy, nonatomic) NSString *timestampString; // ivar: _timestampString


-(BOOL)wantsDrawerLayout;
-(char)transcriptOrientation;
-(id)IMAssociatedMessageChatItem;
-(id)layoutItemSpacingWithEnvironment:(id)arg0 datasourceItemIndex:(NSInteger)arg1 allDatasourceItems:(id)arg2 supplementryItems:(id)arg3 ;
-(id)loadTimestampString;
-(id)loadTranscriptDrawerText;
-(id)sender;


@end


#endif