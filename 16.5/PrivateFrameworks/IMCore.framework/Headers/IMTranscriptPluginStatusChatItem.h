// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMTRANSCRIPTPLUGINSTATUSCHATITEM_H
#define IMTRANSCRIPTPLUGINSTATUSCHATITEM_H



#import "IMMessageStatusChatItem.h"
#import "IMBalloonPluginDataSource.h"

@interface IMTranscriptPluginStatusChatItem : IMMessageStatusChatItem

@property (readonly, nonatomic) IMBalloonPluginDataSource *dataSource; // ivar: _dataSource


-(id)_initWithItem:(id)arg0 dataSource:(id)arg1 ;


@end


#endif