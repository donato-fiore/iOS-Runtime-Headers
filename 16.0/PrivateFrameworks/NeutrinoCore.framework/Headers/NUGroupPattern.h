// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUGROUPPATTERN_H
#define NUGROUPPATTERN_H

@class NSArray;


#import "NUPattern.h"

@interface NUGroupPattern : NUPattern

@property (readonly) NSArray *group; // ivar: _group


-(BOOL)isEqualToGroupPattern:(id)arg0 ;
-(BOOL)isEqualToPattern:(id)arg0 ;
-(BOOL)isFixedOrder;
-(BOOL)match:(id)arg0 location:(*NSUInteger)arg1 count:(*NSUInteger)arg2 ;
-(id)init;
-(id)initWithGroup:(id)arg0 ;
-(id)optimizedPattern;
-(id)shortestMatch;
-(id)stringRepresentation;
-(id)tokens;


@end


#endif