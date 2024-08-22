// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUWALLPAPERNIGHTLYSUGGESTIONSVIEWCONTROLLER_H
#define PUWALLPAPERNIGHTLYSUGGESTIONSVIEWCONTROLLER_H

@class NSDate;
@protocol PUWallpaperNightlySuggestionsPosterConfiguration;


#import "PUWallpaperClassListViewController.h"
#import "PUWallpaperNightlySuggestionsDataSource.h"

@interface PUWallpaperNightlySuggestionsViewController : PUWallpaperClassListViewController {
    PUWallpaperNightlySuggestionsDataSource *_dataSource;
    NSDate *_currentDate;
}


@property (retain, nonatomic) NSObject<PUWallpaperNightlySuggestionsPosterConfiguration> *posterConfiguration; // ivar: _posterConfiguration


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)createDataSources;
-(void)nextDate:(id)arg0 ;
-(void)previousDate:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif