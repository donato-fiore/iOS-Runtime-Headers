// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2ENCRYPTEDFRAGMENTPAYLOAD_H
#define NEIKEV2ENCRYPTEDFRAGMENTPAYLOAD_H



#import "NEIKEv2EncryptedPayload.h"

@interface NEIKEv2EncryptedFragmentPayload : NEIKEv2EncryptedPayload

@property unsigned int fragmentNumber; // ivar: _fragmentNumber
@property NSUInteger nextPayload; // ivar: _nextPayload
@property unsigned int totalFragments; // ivar: _totalFragments


+(id)copyTypeDescription;
-(BOOL)hasRequiredFields;
-(BOOL)parsePayloadData;
-(NSUInteger)type;


@end


#endif