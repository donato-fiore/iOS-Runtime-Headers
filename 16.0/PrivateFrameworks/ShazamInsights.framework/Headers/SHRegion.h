// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHREGION_H
#define SHREGION_H

@class NSString, CLLocation;

#import <Foundation/Foundation.h>


@interface SHRegion : NSObject

@property (readonly, copy, nonatomic) NSString *geohash; // ivar: _geohash
@property (readonly, nonatomic) CLLocation *location; // ivar: _location


-(id)initWithGeohash:(id)arg0 ;
-(id)initWithLocation:(id)arg0 ;


@end


#endif