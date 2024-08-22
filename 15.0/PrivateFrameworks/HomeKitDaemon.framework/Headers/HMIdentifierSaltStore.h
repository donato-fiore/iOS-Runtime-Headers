// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIDENTIFIERSALTSTORE_H
#define HMIDENTIFIERSALTSTORE_H

@class HMFUnfairLock, NSData;

#import <Foundation/Foundation.h>


@interface HMIdentifierSaltStore : NSObject {
    HMFUnfairLock *_lock;
}


@property (retain, nonatomic) NSData *assistantIdentifierSalt; // ivar: _assistantIdentifierSalt
@property (retain, nonatomic) NSData *identifierSalt; // ivar: _identifierSalt


-(id)init;


@end


#endif