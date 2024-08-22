// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMINVITATIONSHORIZONTALGADGETPROVIDER_H
#define PXCMMINVITATIONSHORIZONTALGADGETPROVIDER_H

@class NSDate, NSString;
@protocol PXSettingsKeyObserver, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXForYouRankable, PXCMMWorkflowPresenting;


#import "PXGadgetProvider.h"
#import "PXCMMInvitationsDataSourceManager.h"

@interface PXCMMInvitationsHorizontalGadgetProvider : PXGadgetProvider <PXSettingsKeyObserver, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXForYouRankable>

 {
    PXCMMInvitationsDataSourceManager *_dataSourceManager;
    BOOL _didGenerateGadgets;
}


@property (retain, nonatomic) NSDate *cachedPriorityDate; // ivar: _cachedPriorityDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSInteger defaultPriority;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *priorityDate;
@property (readonly, nonatomic) NSInteger priorityType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PXCMMWorkflowPresenting> *workflowPresenter; // ivar: _workflowPresenter


-(BOOL)supportsDynamicRanking;
-(NSUInteger)estimatedNumberOfGadgets;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithWorkflowPresenter:(id)arg0 ;
-(void)_configureDataSourceManager;
-(void)_updateGadgets;
-(void)generateGadgets;
-(void)loadDataForGadgets;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif