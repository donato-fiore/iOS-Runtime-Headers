// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKIFADDRS_H
#define CRKIFADDRS_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CRKIfaddrs.h"

@interface CRKIfaddrs : NSObject {
    ? mIfaddrs;
}


@property (readonly, copy, nonatomic) NSString *IPAddress;
@property (readonly, nonatomic, getter=isInternetInterface) BOOL internetInterface;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) CRKIfaddrs *next;


-(id)initWithIfaddrs:(struct ifaddrs *)arg0 ;


@end


#endif