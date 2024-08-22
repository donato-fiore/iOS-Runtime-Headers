// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPLACESMAPLAYOUTITEMIMPL_H
#define PXPLACESMAPLAYOUTITEMIMPL_H

@class NSString, NSOrderedSet, NSMutableOrderedSet;
@protocol PXPlacesMapLayoutItem;

#import <Foundation/Foundation.h>


@interface PXPlacesMapLayoutItemImpl : NSObject <PXPlacesMapLayoutItem>



@property CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSOrderedSet *geotaggables;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableOrderedSet *layoutGeotaggables; // ivar: _layoutGeotaggables
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLayoutItem:(id)arg0 ;
-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(void)addGeotaggable:(id)arg0 ;
-(void)addGeotaggables:(id)arg0 ;


@end


#endif