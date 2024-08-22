// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKENROLLRESULTINFO_H
#define BKENROLLRESULTINFO_H


#import <Foundation/Foundation.h>

#import "BKIdentity.h"

@interface BKEnrollResultInfo : NSObject

@property (retain, nonatomic) BKIdentity *enrolledIdentity; // ivar: _enrolledIdentity


-(id)initWithServerIdentity:(id)arg0 details:(id)arg1 device:(id)arg2 ;


@end


#endif