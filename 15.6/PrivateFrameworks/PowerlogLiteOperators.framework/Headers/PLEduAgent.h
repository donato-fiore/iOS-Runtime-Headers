// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLEDUAGENT_H
#define PLEDUAGENT_H

@class PLAgent, PLXPCListenerOperatorComposition;



@interface PLEduAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *syncBubbleStatusNotification; // ivar: _syncBubbleStatusNotification


+(id)entryEventPointDefinitionMode;
+(id)entryEventPointDefinitionSyncBubble;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)init;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventPointMode;


@end


#endif