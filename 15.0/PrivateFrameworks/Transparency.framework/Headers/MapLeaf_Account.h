// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPLEAF_ACCOUNT_H
#define MAPLEAF_ACCOUNT_H

@class NSData, NSMutableArray;


#import "GPBMessage.h"

@interface MapLeaf_Account : GPBMessage

@property (copy, nonatomic) NSData *accountId;
@property (retain, nonatomic) NSMutableArray *devicesArray;
@property (readonly, nonatomic) NSUInteger devicesArray_Count;


+(id)descriptor;


@end


#endif