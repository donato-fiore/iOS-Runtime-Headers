// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMETROREGIONDATA_H
#define GEOMETROREGIONDATA_H


#import <Foundation/Foundation.h>

#import "GEOGloriaDB.h"

@interface GEOMetroRegionData : NSObject {
    GEOGloriaDB *_db;
}




-(id)init;
-(id)initWithFileURL:(id)arg0 ;
-(id)metroNameForLocation:(id)arg0 ;


@end


#endif