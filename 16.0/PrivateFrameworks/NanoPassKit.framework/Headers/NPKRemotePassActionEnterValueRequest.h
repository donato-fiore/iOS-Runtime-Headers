// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKREMOTEPASSACTIONENTERVALUEREQUEST_H
#define NPKREMOTEPASSACTIONENTERVALUEREQUEST_H

@protocol NPKBalanceField;


#import "NPKRemotePassActionRequest.h"
#import "NPKProtoRemotePassActionEnterValueRequest.h"

@interface NPKRemotePassActionEnterValueRequest : NPKRemotePassActionRequest {
    id<NPKBalanceField> *_cachedBalanceField;
}


@property (readonly, nonatomic) NSObject<NPKBalanceField> *balanceField;
@property (retain, nonatomic) NPKProtoRemotePassActionEnterValueRequest *protoRequest; // ivar: _protoRequest


-(id)action;
-(id)description;
-(id)identifier;
-(id)initWithIdentifier:(id)arg0 cardType:(NSUInteger)arg1 passOrganizationName:(id)arg2 balanceField:(id)arg3 image:(id)arg4 passLocalizedDesciption:(id)arg5 caption:(id)arg6 summaryText:(id)arg7 ;
-(id)initWithPass:(id)arg0 image:(id)arg1 balanceField:(id)arg2 ;


@end


#endif