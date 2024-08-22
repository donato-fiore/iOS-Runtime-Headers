// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEDETAILSETTINGSFACECROPDATASOURCE_H
#define PXPEOPLEDETAILSETTINGSFACECROPDATASOURCE_H

@class PHFetchResult, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXPeopleDetailSettingsFaceCropDataSource : NSObject

@property (retain, nonatomic) PHFetchResult *fetchResult; // ivar: _fetchResult
@property (retain, nonatomic) NSMutableDictionary *images; // ivar: _images
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imagesIsolationQueue; // ivar: _imagesIsolationQueue


-(NSUInteger)numberOfAssets;
-(id)imageAtIndexPath:(id)arg0 ;
-(id)init;
-(id)nameAtIndexPath:(id)arg0 ;


@end


#endif