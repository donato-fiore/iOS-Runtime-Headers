// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUJSSCALE_H
#define NUJSSCALE_H

@class NSValue;


#import "NUJSRational.h"

@interface NUJSScale : NUJSRational

@property (readonly) ? scale;
@property (readonly) NSValue *value;


-(id)initWithScale:(struct ? )arg0 ;
-(id)nu_unwrapJSValue;


@end


#endif