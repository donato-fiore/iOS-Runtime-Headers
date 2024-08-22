// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSHAREDALBUMACTIVITYHORIZONTALGADGETPROVIDER_H
#define PXSHAREDALBUMACTIVITYHORIZONTALGADGETPROVIDER_H

@class NSDate, NSString;
@protocol PXFeedSectionInfosManagerDelegate, PXForYouRankable;


#import "PXGadgetProvider.h"
#import "PXFeedSectionInfosManager.h"
#import "PXInboxAggregateDataSourceManager.h"

@interface PXSharedAlbumActivityHorizontalGadgetProvider : PXGadgetProvider <PXFeedSectionInfosManagerDelegate, PXForYouRankable>



@property (retain, nonatomic) NSDate *cachedPriorityDate; // ivar: _cachedPriorityDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSInteger defaultPriority;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXFeedSectionInfosManager *feedSectionInfosManager; // ivar: _feedSectionInfosManager
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXInboxAggregateDataSourceManager *inboxDataSourceManager; // ivar: _inboxDataSourceManager
@property (readonly, nonatomic) NSDate *priorityDate;
@property (readonly, nonatomic) NSInteger priorityType;
@property (readonly) Class superclass;


-(BOOL)supportsDynamicRanking;
-(NSInteger)_countOfSectionInfosToDisplay:(NSUInteger)arg0 ;
-(NSUInteger)estimatedNumberOfGadgets;
-(id)_currentGadgetOfType:(NSUInteger)arg0 ;
-(id)_gadgetTitle;
-(id)init;
-(void)_navigateToSharedAlbumActivityFeed:(id)arg0 ;
-(void)_updateGadgetTitle;
-(void)_updateGadgets;
-(void)dealloc;
-(void)feedSectionInfosManager:(id)arg0 sectionInfosDidChange:(id)arg1 ;
-(void)generateGadgets;


@end


#endif