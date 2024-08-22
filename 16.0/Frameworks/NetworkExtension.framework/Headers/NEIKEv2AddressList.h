// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2ADDRESSLIST_H
#define NEIKEV2ADDRESSLIST_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface NEIKEv2AddressList : NSObject {
    NSMutableArray *_ipv6AddressList;
    NSMutableArray *_ipv4AddressList;
    NSUInteger _ipv6AddressIndex;
    NSUInteger _ipv4AddressIndex;
}






@end


#endif