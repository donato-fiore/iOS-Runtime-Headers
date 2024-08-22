// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPOSTSIRIENGAGEMENTEVENT_H
#define BMPOSTSIRIENGAGEMENTEVENT_H

@class NSString, NSArray;
@protocol BMStoreData;


#import "BMEventBase.h"

@interface BMPostSiriEngagementEvent : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *UISessionID; // ivar: _UISessionID
@property (readonly, nonatomic) NSString *conversationPath; // ivar: _conversationPath
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasIsUserAbandoned; // ivar: _hasIsUserAbandoned
@property (nonatomic) BOOL hasIsUserCancelled; // ivar: _hasIsUserCancelled
@property (nonatomic) BOOL hasTaskSuccess; // ivar: _hasTaskSuccess
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isUserAbandoned; // ivar: _isUserAbandoned
@property (readonly, nonatomic) BOOL isUserCancelled; // ivar: _isUserCancelled
@property (readonly, nonatomic) NSArray *pseEvents; // ivar: _pseEvents
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *taskID; // ivar: _taskID
@property (readonly, nonatomic) int taskSuccess; // ivar: _taskSuccess
@property (readonly, nonatomic) NSString *taskType; // ivar: _taskType


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithUISessionID:(id)arg0 taskID:(id)arg1 taskType:(id)arg2 conversationPath:(id)arg3 taskSuccess:(int)arg4 isUserAbandoned:(BOOL)arg5 isUserCancelled:(BOOL)arg6 pseEvents:(id)arg7 ;
-(id)initWithUISessionId:(id)arg0 domain:(id)arg1 action:(id)arg2 isPostSiriEngagement:(BOOL)arg3 pseDeltaDuration:(CGFloat)arg4 pseDeltaSinceUIStart:(CGFloat)arg5 pseDeltaSinceUIEnd:(CGFloat)arg6 pseContents:(id)arg7 ;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif