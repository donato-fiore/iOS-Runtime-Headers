// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOMPOSEDGEOMETRYROUTETRAFFICCOLORS_H
#define GEOCOMPOSEDGEOMETRYROUTETRAFFICCOLORS_H


#import <Foundation/Foundation.h>


@interface GEOComposedGeometryRouteTrafficColors : NSObject

@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) *unsigned int trafficColorOffsets; // ivar: _trafficColorOffsets
@property (readonly, nonatomic) *unsigned int trafficColors; // ivar: _trafficColors


-(id)initWithColors:(*unsigned int)arg0 offsets:(*unsigned int)arg1 count:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif