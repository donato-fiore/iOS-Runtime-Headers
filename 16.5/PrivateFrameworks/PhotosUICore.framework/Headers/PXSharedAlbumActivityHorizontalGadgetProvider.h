// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDALBUMACTIVITYHORIZONTALGADGETPROVIDER_H
#define PXSHAREDALBUMACTIVITYHORIZONTALGADGETPROVIDER_H

@class NSString, NSDate;
@protocol PXFeedSectionInfosManagerDelegate, PXForYouRankable;


#import "PXGadgetProvider.h"
#import "PXFeedSectionInfosManager.h"
#import "PXInboxAggregateDataSourceManager.h"

@interface PXSharedAlbumActivityHorizontalGadgetProvider : PXGadgetProvider <PXFeedSectionInfosManagerDelegate, PXForYouRankable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXFeedSectionInfosManager *feedSectionInfosManager; // ivar: _feedSectionInfosManager
@property (readonly, nonatomic) NSInteger forYouContentIdentifier;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXInboxAggregateDataSourceManager *inboxDataSourceManager; // ivar: _inboxDataSourceManager
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly) Class superclass;


-(BOOL)_areSharedStreamsEnabled;
-(NSInteger)_countOfSectionInfosToDisplay:(NSUInteger)arg0 ;
-(NSUInteger)estimatedNumberOfGadgets;
-(id)_currentGadgetOfType:(NSUInteger)arg0 ;
-(id)_gadgetTitle;
-(id)init;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)_navigateToSharedAlbumActivityFeed:(id)arg0 ;
-(void)_updateGadgetTitle;
-(void)_updateGadgets;
-(void)dealloc;
-(void)feedSectionInfosManager:(id)arg0 sectionInfosDidChange:(id)arg1 ;
-(void)generateGadgets;


@end


#endif