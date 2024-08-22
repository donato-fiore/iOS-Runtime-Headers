// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUPATTERN_H
#define NUPATTERN_H

@class NSArray, NSString, NSSet;

#import <Foundation/Foundation.h>


@interface NUPattern : NSObject

@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isFixedOrder; // ivar: _isFixedOrder
@property (readonly, nonatomic) NSArray *shortestMatch;
@property (readonly, nonatomic) NSString *stringRepresentation;
@property (readonly, nonatomic) NSSet *tokens;


+(BOOL)scanString:(id)arg0 intoPattern:(*id)arg1 error:(*id)arg2 ;
+(id)patternWithString:(id)arg0 error:(*id)arg1 ;
-(BOOL)isDetermisitic;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPattern:(id)arg0 ;
-(BOOL)match:(id)arg0 ;
-(BOOL)match:(id)arg0 location:(*NSUInteger)arg1 count:(*NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)description;
-(id)optimizedPattern;


@end


#endif