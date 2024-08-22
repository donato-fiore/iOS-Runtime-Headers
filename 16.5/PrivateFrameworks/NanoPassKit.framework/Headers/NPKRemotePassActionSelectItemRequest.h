// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKREMOTEPASSACTIONSELECTITEMREQUEST_H
#define NPKREMOTEPASSACTIONSELECTITEMREQUEST_H

@class NSString;
@protocol NPKCommutePlanField;


#import "NPKRemotePassActionRequest.h"
#import "NPKProtoRemotePassActionSelectItemRequest.h"

@interface NPKRemotePassActionSelectItemRequest : NPKRemotePassActionRequest {
    id<NPKCommutePlanField> *_cachedCommutePlanField;
}


@property (readonly, nonatomic) NSObject<NPKCommutePlanField> *commutePlanField;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSString *passSerialNumber;
@property (readonly, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NPKProtoRemotePassActionSelectItemRequest *protoRequest; // ivar: _protoRequest


-(id)action;
-(id)actionText;
-(id)description;
-(id)identifier;
-(id)initWithIdentifier:(id)arg0 deviceIdentifier:(id)arg1 cardType:(NSUInteger)arg2 passOrganizationName:(id)arg3 passTypeIdentifier:(id)arg4 passSerialNumber:(id)arg5 commutePlanField:(id)arg6 image:(id)arg7 passLocalizedDesciption:(id)arg8 caption:(id)arg9 summaryText:(id)arg10 ;
-(id)initWithPass:(id)arg0 image:(id)arg1 commutePlanField:(id)arg2 ;


@end


#endif