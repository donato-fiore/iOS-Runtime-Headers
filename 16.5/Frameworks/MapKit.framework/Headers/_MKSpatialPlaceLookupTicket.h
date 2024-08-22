// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKSPATIALPLACELOOKUPTICKET_H
#define _MKSPATIALPLACELOOKUPTICKET_H

@class NSError, GEOMapRegion, NSString;
@protocol MKMapServiceSpatialPlaceLookupTicket, GEOMapServiceSpatialPlaceLookupTicket;

#import <Foundation/Foundation.h>


@interface _MKSpatialPlaceLookupTicket : NSObject <MKMapServiceSpatialPlaceLookupTicket>

 {
    id<GEOMapServiceSpatialPlaceLookupTicket> *_spatialPlaceLookupTicket;
    NSError *_error;
    GEOMapRegion *_resultBoundingRegion;
}


@property (readonly, nonatomic) GEOMapRegion *boundingRegion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTicket:(id)arg0 ;
-(id)traits;
-(void)cancel;
// -(void)submitWithHandler:(id)arg0 queue:(unk)arg1  ;


@end


#endif