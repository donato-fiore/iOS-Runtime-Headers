// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSRANKINGRENDERANDENGAGEMENTVALUES_H
#define PRSRANKINGRENDERANDENGAGEMENTVALUES_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PRSRankingRenderAndEngagementValues : NSObject <NSSecureCoding, NSCopying>

 {
    short _renderValues;
    short _engagementValues;
}




+(BOOL)supportsSecureCoding;
-(BOOL)getRankingValues:(*short)arg0 withRankingValueSize:(NSUInteger)arg1 forType:(int)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)incrementRankingValuesForType:(int)arg0 ;
-(void)setRankingValues:(short)arg0 forType:(int)arg1 ;


@end


#endif