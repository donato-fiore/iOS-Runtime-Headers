// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOSPATIALPLACELOOKUPRESULT_H
#define GEOSPATIALPLACELOOKUPRESULT_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface GEOSpatialPlaceLookupResult : NSObject {
    NSMapTable *_parametersToMapItemsMap;
    NSMapTable *_parametersToResultItemMap;
}




-(id)init;
-(id)initWithMapItemMap:(id)arg0 resultItemMap:(id)arg1 ;
-(id)mapItemsForSpatialLookupParameters:(id)arg0 ;
-(id)resultItemForSpatialLookupParameters:(id)arg0 ;


@end


#endif