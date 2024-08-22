// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLLOCATIONOFINTERESTLOCATION_H
#define PLLOCATIONOFINTERESTLOCATION_H

@class CLLocation;

#import <Foundation/Foundation.h>


@interface PLLocationOfInterestLocation : NSObject

@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) CGFloat uncertainty; // ivar: _uncertainty


-(CGFloat)distanceFromLocation:(id)arg0 withTypeRadius:(CGFloat)arg1 ;
-(id)description;
-(id)initWithLocation:(id)arg0 uncertainty:(CGFloat)arg1 ;


@end


#endif