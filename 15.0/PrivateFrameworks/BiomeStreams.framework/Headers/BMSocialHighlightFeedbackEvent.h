// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMSOCIALHIGHLIGHTFEEDBACKEVENT_H
#define BMSOCIALHIGHLIGHTFEEDBACKEVENT_H

@class NSString, NSDate;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"
#import "BMRankableSocialHighlight.h"

@interface BMSocialHighlightFeedbackEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) NSString *clientVariant; // ivar: _clientVariant
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *feedbackCreationDate; // ivar: _feedbackCreationDate
@property (readonly, nonatomic) NSUInteger feedbackType; // ivar: _feedbackType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BMRankableSocialHighlight *highlight; // ivar: _highlight
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(NSUInteger)_feedbackTypeForProtoType:(int)arg0 ;
-(id)encodeAsProto;
-(id)initWithClientIdentifier:(id)arg0 feedbackType:(NSUInteger)arg1 feedbackCreationDate:(id)arg2 highlight:(id)arg3 ;
-(id)initWithClientIdentifier:(id)arg0 feedbackType:(NSUInteger)arg1 feedbackCreationDate:(id)arg2 highlight:(id)arg3 clientVariant:(id)arg4 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;
-(int)_protoFeedbackType;


@end


#endif