// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSIRIPOSTSIRIENGAGEMENT_H
#define BMSIRIPOSTSIRIENGAGEMENT_H

@class BMEventBase, NSString, NSArray;
@protocol BMStoreData;


#import "BMSiriPostSiriEngagementFeatures.h"

@interface BMSiriPostSiriEngagement : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *UISessionID; // ivar: _UISessionID
@property (readonly, nonatomic) NSString *appPattern; // ivar: _appPattern
@property (readonly, nonatomic) NSString *conversationPath; // ivar: _conversationPath
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BMSiriPostSiriEngagementFeatures *engagementUnderstandingFeatures; // ivar: _engagementUnderstandingFeatures
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *pseEvents; // ivar: _pseEvents
@property (readonly, nonatomic) NSArray *requestIds; // ivar: _requestIds
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *taskID; // ivar: _taskID
@property (readonly, nonatomic) NSString *taskType; // ivar: _taskType


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithUISessionID:(id)arg0 taskID:(id)arg1 taskType:(id)arg2 conversationPath:(id)arg3 appPattern:(id)arg4 requestIds:(id)arg5 engagementUnderstandingFeatures:(id)arg6 pseEvents:(id)arg7 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif