// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWPVARVALUEITEM_H
#define NWPVARVALUEITEM_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NWPVarValueItem : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger armObservedCount; // ivar: _armObservedCount
@property (nonatomic) NSUInteger armPullCount; // ivar: _armPullCount
@property (nonatomic) CGFloat sampleRewardMean; // ivar: _sampleRewardMean
@property (nonatomic) CGFloat sampleRewardSum; // ivar: _sampleRewardSum
@property (nonatomic) CGFloat sampleRewardSumSquares; // ivar: _sampleRewardSumSquares


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif