// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPOSTSIRIENGAGEMENTEVENTSIGNAL_H
#define BMPOSTSIRIENGAGEMENTEVENTSIGNAL_H

@class NSString, NSArray;
@protocol BMStoreData;


#import "BMEventBase.h"
#import "BMPostSiriEngagementEventSignalDeltaEvent.h"

@interface BMPostSiriEngagementEventSignal : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *action; // ivar: _action
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) BOOL hasIsPostSiriEngagement; // ivar: _hasIsPostSiriEngagement
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPostSiriEngagement; // ivar: _isPostSiriEngagement
@property (readonly, nonatomic) NSArray *pseContents; // ivar: _pseContents
@property (readonly, nonatomic) BMPostSiriEngagementEventSignalDeltaEvent *pseDelta; // ivar: _pseDelta
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithDomain:(id)arg0 action:(id)arg1 isPostSiriEngagement:(BOOL)arg2 pseDelta:(id)arg3 pseContents:(id)arg4 ;
-(id)initWithDomain:(id)arg0 action:(id)arg1 isPostSiriEngagement:(BOOL)arg2 pseDelta:(id)arg3 pseContentsDictionary:(id)arg4 ;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif