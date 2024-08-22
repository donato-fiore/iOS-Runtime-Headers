// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NULISTPATTERN_H
#define NULISTPATTERN_H

@class NSArray;


#import "NUPattern.h"

@interface NUListPattern : NUPattern

@property (readonly) NSArray *list; // ivar: _list


-(BOOL)isEqualToListPattern:(id)arg0 ;
-(BOOL)isEqualToPattern:(id)arg0 ;
-(BOOL)isFixedOrder;
-(BOOL)match:(id)arg0 location:(*NSUInteger)arg1 count:(*NSUInteger)arg2 ;
-(id)init;
-(id)initWithList:(id)arg0 ;
-(id)optimizedPattern;
-(id)shortestMatch;
-(id)stringRepresentation;
-(id)tokens;


@end


#endif