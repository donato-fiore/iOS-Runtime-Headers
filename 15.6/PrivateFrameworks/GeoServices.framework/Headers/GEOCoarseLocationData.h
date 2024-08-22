// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOARSELOCATIONDATA_H
#define GEOCOARSELOCATIONDATA_H


#import <Foundation/Foundation.h>

#import "GEOGloriaDB.h"

@interface GEOCoarseLocationData : NSObject {
    GEOGloriaDB *_db;
}




-(id)init;
-(id)initWithFileURL:(id)arg0 tileKey:(struct _GEOTileKey *)arg1 ;
-(id)snappedLocationForLocation:(id)arg0 ;


@end


#endif