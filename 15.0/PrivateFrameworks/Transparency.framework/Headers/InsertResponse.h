// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSERTRESPONSE_H
#define INSERTRESPONSE_H

@class NSData, NSString;


#import "GPBMessage.h"
#import "VRFWitness.h"
#import "SignedMutationTimestamp.h"

@interface InsertResponse : GPBMessage

@property (copy, nonatomic) NSData *accountId;
@property (retain, nonatomic) VRFWitness *clientDataWitness;
@property (retain, nonatomic) VRFWitness *deviceIdWitness;
@property (nonatomic) BOOL hasClientDataWitness;
@property (nonatomic) BOOL hasDeviceIdWitness;
@property (nonatomic) BOOL hasSmt;
@property (nonatomic) BOOL hasUriWitness;
@property (copy, nonatomic) NSString *serverEventInfo;
@property (retain, nonatomic) SignedMutationTimestamp *smt;
@property (nonatomic) int status;
@property (retain, nonatomic) VRFWitness *uriWitness;


+(id)descriptor;


@end


#endif