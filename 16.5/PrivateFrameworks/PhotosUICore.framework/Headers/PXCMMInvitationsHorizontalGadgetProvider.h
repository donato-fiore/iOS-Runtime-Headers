// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMINVITATIONSHORIZONTALGADGETPROVIDER_H
#define PXCMMINVITATIONSHORIZONTALGADGETPROVIDER_H

@class NSString, NSDate;
@protocol PXSettingsKeyObserver, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXForYouRankable, PXCMMWorkflowPresenting;


#import "PXGadgetProvider.h"
#import "PXCMMInvitationsDataSourceManager.h"

@interface PXCMMInvitationsHorizontalGadgetProvider : PXGadgetProvider <PXSettingsKeyObserver, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXForYouRankable>

 {
    PXCMMInvitationsDataSourceManager *_dataSourceManager;
    BOOL _didGenerateGadgets;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger forYouContentIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PXCMMWorkflowPresenting> *workflowPresenter; // ivar: _workflowPresenter


-(NSUInteger)estimatedNumberOfGadgets;
-(NSUInteger)gadgetType;
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