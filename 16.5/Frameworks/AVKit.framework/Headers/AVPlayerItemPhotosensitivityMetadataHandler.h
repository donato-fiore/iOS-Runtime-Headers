// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPLAYERITEMPHOTOSENSITIVITYMETADATAHANDLER_H
#define AVPLAYERITEMPHOTOSENSITIVITYMETADATAHANDLER_H

@class AVPlayerItem, NSString, AVPlayerItemMediaDataCollector, NSArray;
@protocol AVPlayerItemMetadataCollectorPushDelegate;

#import <Foundation/Foundation.h>


@interface AVPlayerItemPhotosensitivityMetadataHandler : NSObject <AVPlayerItemMetadataCollectorPushDelegate>

 {
    id *_handler;
    AVPlayerItem *_item;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVPlayerItemMediaDataCollector *metadataCollector; // ivar: _metadataCollector
@property (retain, nonatomic) NSArray *photosensitivityRegions; // ivar: _photosensitivityRegions
@property (readonly) Class superclass;


-(id)initWithPlayerItem:(id)arg0 ;
-(void)dealloc;
-(void)metadataCollector:(id)arg0 didCollectDateRangeMetadataGroups:(id)arg1 indexesOfNewGroups:(id)arg2 indexesOfModifiedGroups:(id)arg3 ;


@end


#endif