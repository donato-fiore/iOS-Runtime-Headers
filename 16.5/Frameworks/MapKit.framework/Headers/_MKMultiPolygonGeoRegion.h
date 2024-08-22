// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKMULTIPOLYGONGEOREGION_H
#define _MKMULTIPOLYGONGEOREGION_H

@class NSString, NSArray;
@protocol MKGeoJSONCoverageRegion;

#import <Foundation/Foundation.h>


@interface _MKMultiPolygonGeoRegion : NSObject <MKGeoJSONCoverageRegion>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *polygons; // ivar: _polygons
@property (readonly) Class superclass;


-(BOOL)_loadWithJSONObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)_loadWithRootJSONObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)coordinateLiesInRegion:(struct CLLocationCoordinate2D )arg0 ;
-(id)initWithContentsOfFile:(id)arg0 error:(*id)arg1 ;
-(id)initWithJSONObject:(id)arg0 error:(*id)arg1 ;


@end


#endif