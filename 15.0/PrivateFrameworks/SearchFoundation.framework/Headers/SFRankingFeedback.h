// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFRANKINGFEEDBACK_H
#define SFRANKINGFEEDBACK_H

@class NSString, NSArray;
@protocol NSCopying;


#import "SFFeedback.h"

@interface SFRankingFeedback : SFFeedback <NSCopying>



@property (nonatomic) CGFloat blendingDuration; // ivar: _blendingDuration
@property (copy, nonatomic) NSString *l2ModelVersion; // ivar: _l2ModelVersion
@property (copy, nonatomic) NSString *l2ShadowModelVersion; // ivar: _l2ShadowModelVersion
@property (copy, nonatomic) NSString *l3ModelVersion; // ivar: _l3ModelVersion
@property (copy, nonatomic) NSArray *sections; // ivar: _sections


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSections:(id)arg0 blendingDuration:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif