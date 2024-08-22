// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUEMPTYPATTERN_H
#define NUEMPTYPATTERN_H



#import "NUPattern.h"

@interface NUEmptyPattern : NUPattern



-(BOOL)isEmpty;
-(BOOL)isEqualToPattern:(id)arg0 ;
-(BOOL)isFixedOrder;
-(BOOL)match:(id)arg0 location:(*NSUInteger)arg1 count:(*NSUInteger)arg2 ;
-(id)optimizedPattern;
-(id)shortestMatch;
-(id)stringRepresentation;
-(id)tokens;


@end


#endif