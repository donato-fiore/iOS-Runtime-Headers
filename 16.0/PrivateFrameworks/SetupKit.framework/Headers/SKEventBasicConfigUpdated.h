// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKEVENTBASICCONFIGUPDATED_H
#define SKEVENTBASICCONFIGUPDATED_H

@class NSDictionary;


#import "SKEvent.h"

@interface SKEventBasicConfigUpdated : SKEvent

@property (readonly, copy, nonatomic) NSDictionary *basicConfig; // ivar: _basicConfig


-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithBasicConfig:(id)arg0 ;


@end


#endif