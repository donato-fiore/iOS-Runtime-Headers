// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAMESSAGINGCAPABILITY_H
#define AAMESSAGINGCAPABILITY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AAMessagingCapability : NSObject

@property (readonly, nonatomic) NSInteger capability; // ivar: _capability
@property (readonly, nonatomic) NSString *capabilityString;


-(id)initWithCapabilityType:(NSInteger)arg0 ;


@end


#endif