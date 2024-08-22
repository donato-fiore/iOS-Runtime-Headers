// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKPOLYGONGEOREGION_H
#define _MKPOLYGONGEOREGION_H

@class NSString;
@protocol MKGeoJSONCoverageRegion;

#import <Foundation/Foundation.h>


@interface _MKPolygonGeoRegion : NSObject <MKGeoJSONCoverageRegion>

 {
    *CLLocationCoordinate2D _polygon;
    NSUInteger _vertexCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_loadWithJSONObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)coordinateLiesInRegion:(struct CLLocationCoordinate2D )arg0 ;
-(id)initWithJSONObject:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif