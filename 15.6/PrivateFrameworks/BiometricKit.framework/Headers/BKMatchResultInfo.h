// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKMATCHRESULTINFO_H
#define BKMATCHRESULTINFO_H


#import <Foundation/Foundation.h>

#import "BKIdentity.h"

@interface BKMatchResultInfo : NSObject

@property (nonatomic) BOOL credentialAdded; // ivar: _credentialAdded
@property (retain, nonatomic) BKIdentity *identity; // ivar: _identity
@property (nonatomic) NSInteger lockoutState; // ivar: _lockoutState
@property (readonly, nonatomic) BOOL resultIgnored; // ivar: _resultIgnored
@property (nonatomic) BOOL unlocked; // ivar: _unlocked


-(id)initWithServerIdentity:(id)arg0 details:(id)arg1 device:(id)arg2 ;


@end


#endif