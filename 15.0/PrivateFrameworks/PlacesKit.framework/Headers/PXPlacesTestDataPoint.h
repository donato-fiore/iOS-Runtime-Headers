// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPLACESTESTDATAPOINT_H
#define PXPLACESTESTDATAPOINT_H

@class NSString;
@protocol PXPlacesGeotaggable;

#import <Foundation/Foundation.h>


@interface PXPlacesTestDataPoint : NSObject <PXPlacesGeotaggable>

 {
    CLLocationCoordinate2D _coordinate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) *CGImage image;
@property (readonly) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(NSInteger)compareTo:(id)arg0 ;
-(id)initWithName:(id)arg0 location:(struct CLLocationCoordinate2D )arg1 ;
-(struct CLLocationCoordinate2D )coordinate;


@end


#endif