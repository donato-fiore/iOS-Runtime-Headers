// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUREPEATPATTERN_H
#define NUREPEATPATTERN_H



#import "NUPattern.h"

@interface NURepeatPattern : NUPattern

@property (readonly) NSInteger maxCount; // ivar: _maxCount
@property (readonly) NSInteger minCount; // ivar: _minCount
@property (readonly) NUPattern *pattern; // ivar: _pattern


-(BOOL)isEqualToPattern:(id)arg0 ;
-(BOOL)isEqualToRepeatPattern:(id)arg0 ;
-(BOOL)isFixedOrder;
-(BOOL)match:(id)arg0 location:(*NSUInteger)arg1 count:(*NSUInteger)arg2 ;
-(id)init;
-(id)initWithPattern:(id)arg0 count:(NSInteger)arg1 ;
-(id)initWithPattern:(id)arg0 minCount:(NSInteger)arg1 ;
-(id)initWithPattern:(id)arg0 minCount:(NSInteger)arg1 maxCount:(NSInteger)arg2 ;
-(id)optimizedPattern;
-(id)shortestMatch;
-(id)stringRepresentation;
-(id)tokens;


@end


#endif