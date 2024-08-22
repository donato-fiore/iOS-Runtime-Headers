// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKREMOTEPASSACTIONENTERVALUEREQUEST_H
#define NPKREMOTEPASSACTIONENTERVALUEREQUEST_H

@class NSString;
@protocol NPKBalanceField;


#import "NPKRemotePassActionEnterValueMessage.h"
#import "NPKProtoRemotePassActionEnterValueRequest.h"

@interface NPKRemotePassActionEnterValueRequest : NPKRemotePassActionEnterValueMessage {
    id<NPKBalanceField> *_cachedBalanceField;
}


@property (readonly, nonatomic) NSObject<NPKBalanceField> *balanceField;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NPKProtoRemotePassActionEnterValueRequest *protoRequest; // ivar: _protoRequest


-(id)description;
-(id)initWithIdentifier:(id)arg0 passOrganizationName:(id)arg1 balanceField:(id)arg2 image:(id)arg3 passLocalizedDesciption:(id)arg4 caption:(id)arg5 summaryText:(id)arg6 ;
-(id)initWithPass:(id)arg0 image:(id)arg1 balanceField:(id)arg2 ;


@end


#endif