// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMMUTABLECHIPVENDOR_H
#define HMMUTABLECHIPVENDOR_H

@class NSString;


#import "HMCHIPVendor.h"

@interface HMMutableCHIPVendor : HMCHIPVendor

@property (getter=isAppleVendor) BOOL appleVendor;
@property (copy) NSString *name;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif