// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOSPATIALLOOKUPPARAMETERS_H
#define GEOSPATIALLOOKUPPARAMETERS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface GEOSpatialLookupParameters : NSObject

@property (readonly, nonatomic) NSArray *categories; // ivar: _categories
@property (readonly, nonatomic) ? coordinate; // ivar: _coordinate
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius


-(id)initWithCoordinate:(struct ? )arg0 radius:(CGFloat)arg1 categories:(id)arg2 ;


@end


#endif