// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUFACERECOGNITIONLIBRARYLISTITEMMANAGER_H
#define HUFACERECOGNITIONLIBRARYLISTITEMMANAGER_H

@class HFItemManager, HFItem, NSArray, HFDemoModeFaceRecognitionDataSource, HFStaticItem, HMHome, HFItemProvider, HFStaticItemProvider, HFUserPhotosLibraryItemProvider;



@interface HUFaceRecognitionLibraryListItemManager : HFItemManager

@property (retain, nonatomic) HFItem *allowFacialRecognitionItem; // ivar: _allowFacialRecognitionItem
@property (retain, nonatomic) NSArray *coalescedPersonEvents; // ivar: _coalescedPersonEvents
@property (retain, nonatomic) HFDemoModeFaceRecognitionDataSource *demoDataSource; // ivar: _demoDataSource
@property (nonatomic) BOOL didSendAnalyticsEvent; // ivar: _didSendAnalyticsEvent
@property (retain, nonatomic) HFStaticItem *knownToHomeItem; // ivar: _knownToHomeItem
@property (readonly, nonatomic) HMHome *overrideHome; // ivar: _overrideHome
@property (retain, nonatomic) HFItemProvider *recentEventsItemProvider; // ivar: _recentEventsItemProvider
@property (nonatomic) NSUInteger recentsLimit; // ivar: _recentsLimit
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider; // ivar: _staticItemProvider
@property (retain, nonatomic) HFUserPhotosLibraryItemProvider *userPhotosLibraryItemProvider; // ivar: _userPhotosLibraryItemProvider


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_homeFuture;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithHome:(id)arg0 delegate:(id)arg1 ;
-(void)sendAnalyticsEvent;


@end


#endif