// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFRESULTRANKINGFEEDBACK_H
#define SFRESULTRANKINGFEEDBACK_H

@class NSArray;
@protocol NSCopying;


#import "SFFeedback.h"
#import "SFSearchResult.h"

@interface SFResultRankingFeedback : SFFeedback <NSCopying>



@property (copy, nonatomic) NSArray *duplicateResults; // ivar: _duplicateResults
@property (copy, nonatomic) NSArray *hiddenResults; // ivar: _hiddenResults
@property (nonatomic) NSUInteger localResultPosition; // ivar: _localResultPosition
@property (nonatomic) CGFloat personalizationScore; // ivar: _personalizationScore
@property (retain, nonatomic) SFSearchResult *result; // ivar: _result


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResult:(id)arg0 hiddenResults:(id)arg1 duplicateResults:(id)arg2 localResultPosition:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif