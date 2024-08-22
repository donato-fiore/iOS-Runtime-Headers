// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSECTIONRANKINGFEEDBACK_H
#define SFSECTIONRANKINGFEEDBACK_H

@class NSArray;
@protocol NSCopying;


#import "SFFeedback.h"
#import "SFResultSection.h"

@interface SFSectionRankingFeedback : SFFeedback <NSCopying>



@property (nonatomic) NSUInteger localSectionPosition; // ivar: _localSectionPosition
@property (nonatomic) CGFloat personalizationScore; // ivar: _personalizationScore
@property (copy, nonatomic) NSArray *results; // ivar: _results
@property (copy, nonatomic) SFResultSection *section; // ivar: _section


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResults:(id)arg0 section:(id)arg1 localSectionPosition:(NSUInteger)arg2 personalizationScore:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif