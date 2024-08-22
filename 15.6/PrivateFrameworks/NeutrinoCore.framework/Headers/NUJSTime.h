// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUJSTIME_H
#define NUJSTIME_H

@class NSValue;


#import "NUJSRational.h"

@interface NUJSTime : NUJSRational

@property (readonly) ? time;
@property (readonly) NSValue *value;


-(id)initWithTime:(struct ? )arg0 ;
-(id)nu_unwrapJSValue;


@end


#endif