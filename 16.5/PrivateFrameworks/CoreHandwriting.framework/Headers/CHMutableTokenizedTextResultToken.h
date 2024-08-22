// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHMUTABLETOKENIZEDTEXTRESULTTOKEN_H
#define CHMUTABLETOKENIZEDTEXTRESULTTOKEN_H

@class NSString, NSIndexSet;


#import "CHTokenizedTextResultToken.h"

@interface CHMutableTokenizedTextResultToken : CHTokenizedTextResultToken

@property (nonatomic) CGFloat alignmentScore;
@property (nonatomic) CGRect bounds;
@property (nonatomic) CGFloat combinedScore;
@property (nonatomic) NSUInteger properties;
@property (nonatomic) CGFloat recognitionScore;
@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSIndexSet *strokeIndexes;
@property (nonatomic) NSInteger substrokeCount;
@property (nonatomic) unsigned int wordID;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)appendToken:(id)arg0 ;


@end


#endif