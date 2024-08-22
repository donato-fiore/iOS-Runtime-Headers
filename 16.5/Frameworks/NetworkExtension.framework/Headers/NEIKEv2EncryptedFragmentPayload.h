// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2ENCRYPTEDFRAGMENTPAYLOAD_H
#define NEIKEV2ENCRYPTEDFRAGMENTPAYLOAD_H

@class NSData;


#import "NEIKEv2EncryptedPayload.h"

@interface NEIKEv2EncryptedFragmentPayload : NEIKEv2EncryptedPayload {
    unsigned int _fragmentNumber;
    unsigned int _totalFragments;
    NSUInteger _nextPayload;
    NSData *_fragmentData;
}




+(id)copyTypeDescription;
-(BOOL)hasRequiredFields;
-(BOOL)parsePayloadData;
-(NSUInteger)type;


@end


#endif