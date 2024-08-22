// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTRANSCRIPTPLUGINBREADCRUMBCHATITEM_H
#define IMTRANSCRIPTPLUGINBREADCRUMBCHATITEM_H

@class NSString;
@protocol IMPluginChatItemProtocol;


#import "IMTranscriptChatItem.h"
#import "IMBalloonPluginDataSource.h"

@interface IMTranscriptPluginBreadcrumbChatItem : IMTranscriptChatItem <IMPluginChatItemProtocol>



@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) NSUInteger optionFlags; // ivar: _optionFlags
@property (readonly, nonatomic) NSString *rawStatusText; // ivar: _rawStatusText
@property (readonly, nonatomic) NSString *statusText; // ivar: _statusText
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSString *type;


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithItem:(id)arg0 datasource:(id)arg1 statusText:(id)arg2 optionFlags:(NSUInteger)arg3 ;
-(void)configureStatusTextWithAccount:(id)arg0 ;


@end


#endif