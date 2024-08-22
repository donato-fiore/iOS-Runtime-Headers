// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INSERTRESPONSE_H
#define INSERTRESPONSE_H

@class NSString;


#import "GPBMessage.h"
#import "SignedObject.h"
#import "VRFWitness.h"

@interface InsertResponse : GPBMessage

@property (nonatomic) BOOL hasSmt;
@property (nonatomic) BOOL hasUriWitness;
@property (copy, nonatomic) NSString *serverEventInfo;
@property (retain, nonatomic) SignedObject *smt;
@property (nonatomic) int status;
@property (retain, nonatomic) VRFWitness *uriWitness;


+(id)descriptor;


@end


#endif