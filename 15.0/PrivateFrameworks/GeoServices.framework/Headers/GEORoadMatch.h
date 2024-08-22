// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOROADMATCH_H
#define GEOROADMATCH_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEOMultiSectionFeature.h"

@interface GEORoadMatch : NSObject <NSSecureCoding>



@property (nonatomic) ? coordinateOnRoad; // ivar: _coordinateOnRoad
@property (nonatomic) CGFloat courseOnRoad; // ivar: _courseOnRoad
@property (nonatomic) CGFloat distanceFromJunction; // ivar: _distanceFromJunction
@property (nonatomic) CGFloat distanceFromRoad; // ivar: _distanceFromRoad
@property (nonatomic) CGFloat junctionRadius; // ivar: _junctionRadius
@property (readonly, nonatomic) GEOMultiSectionFeature *roadFeature; // ivar: _roadFeature
@property (copy, nonatomic) NSString *roadName; // ivar: _roadName
@property (nonatomic) CGFloat roadWidth; // ivar: _roadWidth


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinateOnRoad:(struct ? )arg0 courseOnRoad:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif