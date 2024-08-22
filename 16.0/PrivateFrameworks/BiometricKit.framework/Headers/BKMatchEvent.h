// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKMATCHEVENT_H
#define BKMATCHEVENT_H


#import <Foundation/Foundation.h>

#import "BKIdentity.h"

@interface BKMatchEvent : NSObject

@property (retain, nonatomic) BKIdentity *matchedIdentity; // ivar: _matchedIdentity
@property (nonatomic) BOOL result; // ivar: _result
@property (nonatomic) NSUInteger timeStamp; // ivar: _timeStamp


+(id)matchEventWithDictionary:(id)arg0 device:(id)arg1 error:(*id)arg2 ;


@end


#endif