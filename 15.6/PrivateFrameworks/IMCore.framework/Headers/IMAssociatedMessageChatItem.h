// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMASSOCIATEDMESSAGECHATITEM_H
#define IMASSOCIATEDMESSAGECHATITEM_H

@class NSString, NSDictionary, NSDate;


#import "IMTranscriptChatItem.h"
#import "IMHandle.h"

@interface IMAssociatedMessageChatItem : IMTranscriptChatItem {
    BOOL _parentMessageIsFromMe;
}


@property (readonly, nonatomic) NSString *associatedMessageGUID;
@property (readonly, nonatomic) _NSRange associatedMessageRange;
@property (readonly, nonatomic) NSInteger associatedMessageType;
@property (readonly, nonatomic) BOOL failed;
@property (readonly, nonatomic) IMAssociatedMessageGeometryDescriptor geometryDescriptor; // ivar: _geometryDescriptor
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) NSDictionary *messageSummaryInfo;
@property (readonly, nonatomic) BOOL parentMessageIsFromMe;
@property (readonly, nonatomic) IMHandle *sender; // ivar: _sender
@property (readonly, nonatomic) NSDate *time;


-(id)_imAssociatedMessageItem;
-(id)_initWithItem:(id)arg0 sender:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)message;


@end


#endif