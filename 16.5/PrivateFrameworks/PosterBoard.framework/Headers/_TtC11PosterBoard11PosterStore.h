// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11POSTERBOARD11POSTERSTORE_H
#define _TTC11POSTERBOARD11POSTERSTORE_H

@protocol PBFPosterExtensionDataStoreObserver;

#import <Foundation/Foundation.h>


@interface _TtC11PosterBoard11PosterStore : NSObject <PBFPosterExtensionDataStoreObserver>

 {
    ? posterFilter;
    ? currentSelectionIndex;
    ? significantEventsCounter;
    ? glue;
    ? allPosters;
    ? observers;
    ? switcherConfig;
    ? forcePersistSelectionForFocusUpdate;
}




-(id)init;
-(void)dataStoreDidTearDown;
-(void)posterExtensionDataStore:(id)arg0 didAddConfiguration:(id)arg1 ;
-(void)posterExtensionDataStore:(id)arg0 didDeleteConfiguration:(id)arg1 ;
-(void)posterExtensionDataStore:(id)arg0 didUpdateActiveConfiguration:(id)arg1 associatedConfiguration:(id)arg2 ;
-(void)posterExtensionDataStore:(id)arg0 didUpdateConfiguration:(id)arg1 ;
-(void)posterExtensionDataStore:(id)arg0 didUpdateGalleryConfiguration:(id)arg1 ;
-(void)posterExtensionDataStore:(id)arg0 didUpdateSelectedConfiguration:(id)arg1 associatedConfiguration:(id)arg2 ;
-(void)posterExtensionDataStore:(id)arg0 didUpdateSnapshotForConfiguration:(id)arg1 ;
-(void)posterExtensionDataStore:(id)arg0 didUpdateSwitcherConfiguration:(id)arg1 ;
-(void)posterExtensionDataStore:(id)arg0 posterConfiguration:(id)arg1 didUpdateAssociatedHomeScreenPosterConfigurationTo:(id)arg2 ;
-(void)posterExtensionDataStoreDidUpdateConfigurations:(id)arg0 ;


@end


#endif