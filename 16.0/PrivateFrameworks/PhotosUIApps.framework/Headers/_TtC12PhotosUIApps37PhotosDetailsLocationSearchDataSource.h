// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12PHOTOSUIAPPS37PHOTOSDETAILSLOCATIONSEARCHDATASOURCE_H
#define _TTC12PHOTOSUIAPPS37PHOTOSDETAILSLOCATIONSEARCHDATASOURCE_H

@protocol PXPhotosDetailsLocationSearchDataSource, PXInfoProvider, PXInfoUpdaterObserver, PXPhotosDetailsLocationSearchDelegate;

#import <Foundation/Foundation.h>


@interface _TtC12PhotosUIApps37PhotosDetailsLocationSearchDataSource : NSObject <PXPhotosDetailsLocationSearchDataSource, PXInfoProvider, PXInfoUpdaterObserver>

 {
    ? suggester;
    ? assets;
    ? canRemoveLocation;
    ? searchQuery;
    ? completion;
    ? undoManagerProvider;
    ? $__lazy_storage_$_infoUpdater;
}


@property (nonatomic, weak) NSObject<PXPhotosDetailsLocationSearchDelegate> *delegate; // ivar: delegate


-(id)init;
-(id)requestInfoOfKind:(id)arg0 withResultHandler:(id)arg1 ;
-(void)infoUpdaterDidUpdate:(id)arg0 ;


@end


#endif