// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUTOKENPATTERN_H
#define NUTOKENPATTERN_H

@class NSString;


#import "NUPattern.h"

@interface NUTokenPattern : NUPattern

@property (readonly) NSString *token; // ivar: _token


-(BOOL)isEqualToPattern:(id)arg0 ;
-(BOOL)isEqualToTokenPattern:(id)arg0 ;
-(BOOL)isFixedOrder;
-(BOOL)match:(id)arg0 location:(*NSUInteger)arg1 count:(*NSUInteger)arg2 ;
-(id)init;
-(id)initWithToken:(id)arg0 ;
-(id)optimizedPattern;
-(id)shortestMatch;
-(id)stringRepresentation;


@end


#endif