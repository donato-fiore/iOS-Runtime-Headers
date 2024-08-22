// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMINVITATIONSGADGETPROVIDER_H
#define PXCMMINVITATIONSGADGETPROVIDER_H

@class NSString;
@protocol PXChangeObserver, PXSectionedDataSourceManagerObserver, PXCMMInvitationGadgetDelegate, PXCMMWorkflowPresenting;


#import "PXGadgetProvider.h"
#import "PXCMMInvitationsDataSource.h"
#import "PXCMMInvitationsDataSourceManager.h"

@interface PXCMMInvitationsGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXCMMInvitationGadgetDelegate>

 {
    PXCMMInvitationsDataSource *_dataSource;
    BOOL _didGenerateGadgets;
}


@property (readonly, nonatomic) PXCMMInvitationsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PXCMMWorkflowPresenting> *workflowPresenter; // ivar: _workflowPresenter


-(NSUInteger)estimatedNumberOfGadgets;
-(id)_newGadgetForObjectID:(id)arg0 ;
-(id)init;
-(id)initWithDataSourceManager:(id)arg0 workflowPresenter:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)invitationForGadget:(id)arg0 ;
-(void)_setDataSource:(id)arg0 changes:(id)arg1 ;
-(void)generateGadgets;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif