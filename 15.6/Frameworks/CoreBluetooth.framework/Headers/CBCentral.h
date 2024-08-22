// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBCENTRAL_H
#define CBCENTRAL_H



#import "CBPeer.h"

@interface CBCentral : CBPeer

@property (readonly, nonatomic) NSUInteger maximumUpdateValueLength;


-(id)description;


@end


#endif