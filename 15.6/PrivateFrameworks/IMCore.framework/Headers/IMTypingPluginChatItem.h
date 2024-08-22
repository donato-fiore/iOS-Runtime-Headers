// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTYPINGPLUGINCHATITEM_H
#define IMTYPINGPLUGINCHATITEM_H

@class NSString, NSData;
@protocol IMPluginChatItemProtocol;


#import "IMTypingChatItem.h"
#import "IMBalloonPluginDataSource.h"

@interface IMTypingPluginChatItem : IMTypingChatItem <IMPluginChatItemProtocol>



@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSString *type;
@property (readonly, nonatomic) NSData *typingIndicatorIcon; // ivar: _typingIndicatorIcon


-(id)_initWithItem:(id)arg0 dataSource:(id)arg1 ;


@end


#endif