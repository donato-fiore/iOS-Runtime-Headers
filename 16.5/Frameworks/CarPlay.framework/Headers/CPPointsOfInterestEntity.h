// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPPOINTSOFINTERESTENTITY_H
#define CPPOINTSOFINTERESTENTITY_H

@class NSArray, NSString;
@protocol NSSecureCoding, CPPointsOfInterestProviding;


#import "CPEntity.h"

@interface CPPointsOfInterestEntity : CPEntity <NSSecureCoding, CPPointsOfInterestProviding>



@property (retain, nonatomic) NSArray *pointsOfInterest; // ivar: _pointsOfInterest
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 pointsOfInterest:(id)arg1 ;
-(id)objectForIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif