// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8MAPSSYNC21MAPSSYNCDATAVALIDATOR_H
#define _TTC8MAPSSYNC21MAPSSYNCDATAVALIDATOR_H


#import <Foundation/Foundation.h>


@interface _TtC8MapsSync21MapsSyncDataValidator : NSObject



+(BOOL)doesMapItemExistInCollectionWithMapItem:(id)arg0 collection:(id)arg1 ;
+(BOOL)doesMapItemExistInPlacesWithMapItem:(id)arg0 session:(id)arg1 ;
+(id)findMapItemInPlacesWithMapItem:(id)arg0 session:(id)arg1 ;
+(id)findPlaceInCollectionWithMapItem:(id)arg0 collection:(id)arg1 ;
-(id)init;


@end


#endif