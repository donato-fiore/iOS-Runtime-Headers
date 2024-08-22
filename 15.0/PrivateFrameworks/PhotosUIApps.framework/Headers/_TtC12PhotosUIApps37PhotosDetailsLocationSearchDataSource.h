// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12PHOTOSUIAPPS37PHOTOSDETAILSLOCATIONSEARCHDATASOURCE_H
#define _TTC12PHOTOSUIAPPS37PHOTOSDETAILSLOCATIONSEARCHDATASOURCE_H

@protocol PXPhotosDetailsLocationSearchDataSource, PXPhotosDetailsLocationSearchDelegate;

#import <Foundation/Foundation.h>


@interface _TtC12PhotosUIApps37PhotosDetailsLocationSearchDataSource : NSObject <PXPhotosDetailsLocationSearchDataSource>

 {
    ? suggester;
    ? assets;
    ? locationShifter;
    ? canRemoveLocation;
}


@property (nonatomic, weak) NSObject<PXPhotosDetailsLocationSearchDelegate> *delegate; // ivar: delegate


-(id)init;


@end


#endif