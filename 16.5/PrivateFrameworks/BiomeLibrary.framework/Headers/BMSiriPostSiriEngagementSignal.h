// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSIRIPOSTSIRIENGAGEMENTSIGNAL_H
#define BMSIRIPOSTSIRIENGAGEMENTSIGNAL_H

@class BMEventBase, NSString, NSArray;
@protocol BMStoreData;


#import "BMSiriPostSiriEngagementSignalDeltaEvent.h"

@interface BMSiriPostSiriEngagementSignal : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *action; // ivar: _action
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) CGFloat donatedTimestamp; // ivar: _donatedTimestamp
@property (nonatomic) BOOL hasDonatedTimestamp; // ivar: _hasDonatedTimestamp
@property (nonatomic) BOOL hasIsPostSiriEngagement; // ivar: _hasIsPostSiriEngagement
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPostSiriEngagement; // ivar: _isPostSiriEngagement
@property (readonly, nonatomic) NSArray *pseContents; // ivar: _pseContents
@property (readonly, nonatomic) BMSiriPostSiriEngagementSignalDeltaEvent *pseDelta; // ivar: _pseDelta
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithDomain:(id)arg0 action:(id)arg1 isPostSiriEngagement:(id)arg2 pseDelta:(id)arg3 pseContents:(id)arg4 donatedTimestamp:(id)arg5 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif