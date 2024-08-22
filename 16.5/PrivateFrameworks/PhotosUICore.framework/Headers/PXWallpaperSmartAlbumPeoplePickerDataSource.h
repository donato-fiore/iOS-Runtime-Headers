// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXWALLPAPERSMARTALBUMPEOPLEPICKERDATASOURCE_H
#define PXWALLPAPERSMARTALBUMPEOPLEPICKERDATASOURCE_H

@class NSHashTable, NSString, NSArray, PHFetchResult, PHPhotoLibrary, PHUserFeedbackCalculator;
@protocol PHPhotoLibraryChangeObserver, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXWallpaperSmartAlbumPeoplePickerDataSource : NSObject <PHPhotoLibraryChangeObserver>



@property (readonly, nonatomic) NSHashTable *changeObservers; // ivar: _changeObservers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain) NSArray *nonVIPPersons; // ivar: _nonVIPPersons
@property (retain, nonatomic) PHFetchResult *nonVIPPersonsFetchResult; // ivar: _nonVIPPersonsFetchResult
@property (retain, nonatomic) PHFetchResult *peopleSuggestions; // ivar: _peopleSuggestions
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;
@property (readonly, nonatomic) PHUserFeedbackCalculator *userFeedbackCalculator; // ivar: _userFeedbackCalculator
@property (retain) NSArray *vipPersons; // ivar: _vipPersons
@property (retain, nonatomic) PHFetchResult *vipPersonsFetchResult; // ivar: _vipPersonsFetchResult
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)_fetchPeople;
-(void)_fetchPeopleWallpaperSuggestions;
-(void)addChangeObserver:(id)arg0 ;
-(void)notifyChanges;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)removeChangeObserver:(id)arg0 ;
-(void)startBackgroundFetch;


@end


#endif