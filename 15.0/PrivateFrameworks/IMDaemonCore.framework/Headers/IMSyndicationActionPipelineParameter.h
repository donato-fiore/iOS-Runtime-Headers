// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMSYNDICATIONACTIONPIPELINEPARAMETER_H
#define IMSYNDICATIONACTIONPIPELINEPARAMETER_H

@class NSString, NSNumber, NSArray, IMSyndicationAction;
@protocol IMSyndicationActionProcessingParameter, IMFindChatProcessingParameter;

#import <Foundation/Foundation.h>

#import "IMDChat.h"

@interface IMSyndicationActionPipelineParameter : NSObject <IMSyndicationActionProcessingParameter, IMFindChatProcessingParameter>



@property (readonly, nonatomic) unsigned char actionType_v2; // ivar: _actionType_v2
@property (readonly, nonatomic) IMDChat *chat; // ivar: _chat
@property (copy, nonatomic) NSString *currentGroupName; // ivar: _currentGroupName
@property (readonly, nonatomic) NSUInteger encodedSyndicationStartDate; // ivar: _encodedSyndicationStartDate
@property (copy, nonatomic) NSString *fromDisplayID; // ivar: _fromDisplayID
@property (copy, nonatomic) NSString *fromIdentifier; // ivar: _fromIdentifier
@property (copy, nonatomic) NSString *groupID; // ivar: _groupID
@property (retain, nonatomic) NSNumber *groupParticipantVersion; // ivar: _groupParticipantVersion
@property (retain, nonatomic) NSNumber *groupProtocolVersion; // ivar: _groupProtocolVersion
@property (nonatomic) BOOL isFromMe; // ivar: _isFromMe
@property (readonly, nonatomic) unsigned char itemType; // ivar: _itemType
@property (readonly, nonatomic) NSString *messagePartGUID; // ivar: _messagePartGUID
@property (copy, nonatomic) NSArray *participantIdentifiers; // ivar: _participantIdentifiers
@property (readonly, nonatomic) _NSRange syndicatedMessagePartRange; // ivar: _syndicatedMessagePartRange
@property (readonly, nonatomic) IMSyndicationAction *syndicationAction; // ivar: _syndicationAction
@property (copy, nonatomic) NSString *toIdentifier; // ivar: _toIdentifier
@property (readonly, nonatomic) unsigned char version; // ivar: _version


-(id)createSyndicationActionWithChat:(id)arg0 ;
-(id)description;
-(id)initWithDefusedSyndicationAction:(id)arg0 idsTrustedData:(id)arg1 pipelineResources:(id)arg2 ;


@end


#endif