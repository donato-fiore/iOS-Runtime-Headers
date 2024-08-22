// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCUSTOMROUTINGPARTIALIP_H
#define AVCUSTOMROUTINGPARTIALIP_H

@class NSData;

#import <Foundation/Foundation.h>


@interface AVCustomRoutingPartialIP : NSObject

@property (readonly, copy, nonatomic) NSData *address; // ivar: _address
@property (readonly, copy, nonatomic) NSData *mask; // ivar: _mask


-(id)initWithAddress:(id)arg0 mask:(id)arg1 ;


@end


#endif