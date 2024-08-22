// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSCOREDLOCATION_H
#define PPSCOREDLOCATION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PPLocation.h"

@interface PPScoredLocation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) PPLocation *location; // ivar: _location
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly, nonatomic) CGFloat sentimentScore; // ivar: _sentimentScore


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToScoredLocation:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(id)arg0 score:(CGFloat)arg1 sentimentScore:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif