// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCMPSSTYLETRANSFERHELPERS_H
#define TCMPSSTYLETRANSFERHELPERS_H


#import <Foundation/Foundation.h>


@interface TCMPSStyleTransferHelpers : NSObject



+(id)toNSDictionary:(struct map<std::string, turi::neural_net::shared_float_array, std::less<std::string>, std::allocator<std::pair<const std::string, turi::neural_net::shared_float_array>>> )arg0 ;
+(struct map<std::string, turi::neural_net::shared_float_array, std::less<std::string>, std::allocator<std::pair<const std::string, turi::neural_net::shared_float_array>>> )fromNSDictionary:(id)arg0 ;
+(struct vector<unsigned long, std::allocator<unsigned long>> )toVector:(id)arg0 ;


@end


#endif