// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKMAPITEMIDENTIFIER_H
#define MKMAPITEMIDENTIFIER_H

@class GEOMapItemIdentifier;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MKMapItemIdentifier : NSObject <NSCopying>

 {
    GEOMapItemIdentifier *_geoMapItemIdentifier;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)muid;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)geoMapItemIdentifier;
-(id)init;
-(id)initWithGEOMapItemIdentifier:(id)arg0 ;
-(id)initWithMUID:(NSUInteger)arg0 ;
-(id)initWithMUID:(NSUInteger)arg0 coordinate:(struct CLLocationCoordinate2D )arg1 ;
-(id)initWithMUID:(NSUInteger)arg0 resultProviderID:(int)arg1 coordinate:(struct CLLocationCoordinate2D )arg2 ;


@end


#endif