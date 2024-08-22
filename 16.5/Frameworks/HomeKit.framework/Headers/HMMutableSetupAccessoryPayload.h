// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMUTABLESETUPACCESSORYPAYLOAD_H
#define HMMUTABLESETUPACCESSORYPAYLOAD_H

@class NSNumber, NSString, NSURL;


#import "HMSetupAccessoryPayload.h"
#import "HMCHIPAccessorySetupPayload.h"

@interface HMMutableSetupAccessoryPayload : HMSetupAccessoryPayload

@property (copy, nonatomic) NSNumber *categoryNumber;
@property (retain, nonatomic) HMCHIPAccessorySetupPayload *chipAccessorySetupPayload;
@property (nonatomic, getter=isPaired) BOOL paired;
@property (copy, nonatomic) NSString *productNumber;
@property (copy, nonatomic) NSString *setupID;
@property (copy, nonatomic) NSURL *setupPayloadURL;
@property (nonatomic) BOOL supportsBTLE;
@property (nonatomic) BOOL supportsIP;
@property (nonatomic) BOOL supportsWAC;
@property (copy, nonatomic) NSNumber *threadIdentifier;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif