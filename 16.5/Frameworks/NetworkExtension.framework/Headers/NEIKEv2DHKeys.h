// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2DHKEYS_H
#define NEIKEV2DHKEYS_H

@class NSData, NSMutableData;

#import <Foundation/Foundation.h>


@interface NEIKEv2DHKeys : NSObject {
    int _desc;
    int _type;
    int _gen1;
    int _gen2;
    NSData *_prime;
    NSData *_curveA;
    NSData *_curveB;
    NSData *_order;
    NSMutableData *_publicKey;
    NSUInteger _publicKeySize;
    *OpaqueSecDHContext _context;
}




-(void)dealloc;


@end


#endif