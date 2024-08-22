// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPINFORMATIONRATINGITEM_H
#define CPINFORMATIONRATINGITEM_H

@class NSNumber;
@protocol NSSecureCoding;


#import "CPInformationItem.h"

@interface CPInformationRatingItem : CPInformationItem <NSSecureCoding>



@property (readonly, nonatomic) NSNumber *maximumRating; // ivar: _maximumRating
@property (readonly, nonatomic) NSNumber *rating; // ivar: _rating


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRating:(id)arg0 maximumRating:(id)arg1 title:(id)arg2 detail:(id)arg3 ;
-(id)initWithTitle:(id)arg0 detail:(id)arg1 ;
-(void)_santizeRatingItem;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif