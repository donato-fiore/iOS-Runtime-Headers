// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PERAPPLICATIONTREECONFIGNODE_H
#define PERAPPLICATIONTREECONFIGNODE_H

@class NSData;


#import "GPBMessage.h"
#import "VRFPublicKey.h"

@interface PerApplicationTreeConfigNode : GPBMessage

@property (nonatomic) int earliestVersion;
@property (nonatomic) BOOL hasVrfPublicKey;
@property (copy, nonatomic) NSData *publicKeyBytes;
@property (retain, nonatomic) VRFPublicKey *vrfPublicKey;


+(id)descriptor;


@end


#endif