// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUIMAPTILEGENERATOR_H
#define CNUIMAPTILEGENERATOR_H

@protocol CNSchedulerProvider, CNScheduler;

#import <Foundation/Foundation.h>


@interface CNUIMapTileGenerator : NSObject

@property (readonly, copy, nonatomic) id *geocoderProvider; // ivar: _geocoderProvider
@property (readonly, copy, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly, copy, nonatomic) id *snapshotterProvider; // ivar: _snapshotterProvider
@property (readonly, copy, nonatomic) NSObject<CNScheduler> *workQueue; // ivar: _workQueue


+(CGFloat)defaultTileSize;
+(id)defaultImage;
// +(id)mapTileImagesForPlacemark:(id)arg0 snapshotterProvider:(id)arg1 scheduler:(unk)arg2  ;
// +(id)placemarkForAddress:(id)arg0 geocoderProvider:(id)arg1 scheduler:(unk)arg2  ;
-(id)init;
// -(id)initWithGeocoderProvider:(id)arg0 snapshotterProvider:(unk)arg1 schedulerProvider:(id)arg2  ;
-(id)tilesForAddress:(id)arg0 ;


@end


#endif