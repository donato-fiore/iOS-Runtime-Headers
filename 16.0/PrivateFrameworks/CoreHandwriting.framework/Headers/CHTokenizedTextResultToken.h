// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHTOKENIZEDTEXTRESULTTOKEN_H
#define CHTOKENIZEDTEXTRESULTTOKEN_H

@class NSString, NSIndexSet;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHTokenizedTextResultToken : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

 {
    CGFloat _recognitionScore;
    CGFloat _combinedScore;
    CGFloat _alignmentScore;
    NSUInteger _properties;
    NSInteger _substrokeCount;
    CGRect _bounds;
}


@property (readonly, nonatomic) CGFloat alignmentScore;
@property (readonly, nonatomic) CGRect bounds;
@property (readonly, nonatomic) CGFloat combinedScore;
@property (readonly, nonatomic) NSUInteger properties;
@property (readonly, nonatomic) CGFloat recognitionScore;
@property (readonly, copy, nonatomic) NSString *string; // ivar: _string
@property (readonly, copy, nonatomic) NSIndexSet *strokeIndexes; // ivar: _strokeIndexes
@property (readonly, nonatomic) NSInteger substrokeCount;
@property (readonly, nonatomic) unsigned int wordID; // ivar: _wordID


+(BOOL)supportsSecureCoding;
+(id)tokenWithString:(id)arg0 strokeIndexes:(id)arg1 wordID:(unsigned int)arg2 recognitionScore:(CGFloat)arg3 combinedScore:(CGFloat)arg4 alignmentScore:(CGFloat)arg5 properties:(NSUInteger)arg6 substrokeCount:(NSInteger)arg7 bounds:(struct CGRect )arg8 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTokenizedTextResultToken:(id)arg0 ;
-(BOOL)isEquivalentToToken:(id)arg0 ;
-(CGFloat)heuristicTextScore;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 strokeIndexes:(id)arg1 wordID:(unsigned int)arg2 recognitionScore:(CGFloat)arg3 combinedScore:(CGFloat)arg4 alignmentScore:(CGFloat)arg5 properties:(NSUInteger)arg6 substrokeCount:(NSInteger)arg7 bounds:(struct CGRect )arg8 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif