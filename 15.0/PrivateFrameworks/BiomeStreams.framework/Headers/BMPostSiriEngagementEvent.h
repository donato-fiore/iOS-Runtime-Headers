// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMPOSTSIRIENGAGEMENTEVENT_H
#define BMPOSTSIRIENGAGEMENTEVENT_H

@class NSString, NSDictionary;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMPostSiriEngagementEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, copy, nonatomic) NSString *action; // ivar: _action
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPostSiriEngagement; // ivar: _isPostSiriEngagement
@property (readonly, nonatomic) NSDictionary *pseContents; // ivar: _pseContents
@property (readonly, nonatomic) CGFloat pseDeltaDuration; // ivar: _pseDeltaDuration
@property (readonly, nonatomic) CGFloat pseDeltaSinceUIEnd; // ivar: _pseDeltaSinceUIEnd
@property (readonly, nonatomic) CGFloat pseDeltaSinceUIStart; // ivar: _pseDeltaSinceUIStart
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uiSessionId; // ivar: _uiSessionId


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithUISessionId:(id)arg0 domain:(id)arg1 action:(id)arg2 isPostSiriEngagement:(BOOL)arg3 pseDeltaDuration:(CGFloat)arg4 pseDeltaSinceUIStart:(CGFloat)arg5 pseDeltaSinceUIEnd:(CGFloat)arg6 pseContents:(id)arg7 ;
-(id)proto;
-(id)serialize;


@end


#endif