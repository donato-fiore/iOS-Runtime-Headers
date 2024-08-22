// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CLRANGINGPEERINTERNAL_H
#define _CLRANGINGPEERINTERNAL_H

@class NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _CLRangingPeerInternal : NSObject <NSCopying>

 {
    NSUInteger _macAddress;
    NSData *_secureRangingKeyID;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMacAddressAsUInt:(NSUInteger)arg0 secureRangingKeyID:(id)arg1 ;
-(void)dealloc;


@end


#endif