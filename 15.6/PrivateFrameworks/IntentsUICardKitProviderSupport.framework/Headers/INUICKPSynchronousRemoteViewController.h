// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INUICKPSYNCHRONOUSREMOTEVIEWCONTROLLER_H
#define INUICKPSYNCHRONOUSREMOTEVIEWCONTROLLER_H

@class UIViewController, NSSet, NSString, INUIRemoteViewController;
@protocol INUICKPSynchronousRemoteViewDelegate, CRKCardSectionViewControlling, INUIRemoteViewControllerDelegate, CRKCardSectionViewControllingDelegate, INUICKPSynchronousRemoteViewControllerDelegate, INUICKPInterfaceSectionOrganizing;



@interface INUICKPSynchronousRemoteViewController : UIViewController <INUICKPSynchronousRemoteViewDelegate, CRKCardSectionViewControlling, INUIRemoteViewControllerDelegate>



@property (readonly, copy, nonatomic) NSSet *cachedRepresentedParameters;
@property (weak, nonatomic) NSObject<CRKCardSectionViewControllingDelegate> *cardSectionViewControllingDelegate; // ivar: cardSectionViewControllingDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<INUICKPSynchronousRemoteViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<INUICKPInterfaceSectionOrganizing> *interfaceSectionOrganizer; // ivar: _interfaceSectionOrganizer
@property (retain, nonatomic) INUIRemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (readonly) Class superclass;


+(void)requestInstanceWithInfo:(id)arg0 configuration:(id)arg1 synchronousRemoteViewControllerDelegate:(id)arg2 reply:(id)arg3 ;
-(BOOL)_canShowWhileLocked;
-(id)_interaction;
-(id)_minimumSizesBySystemVersion;
-(id)interfaceSectionsForRemoteViewController:(id)arg0 ;
-(id)maximumSizesBySystemVersionForRemoteViewController:(id)arg0 ;
-(id)minimumSizesBySystemVersionForRemoteViewController:(id)arg0 ;
-(struct CGSize )cachedSizeForSynchronousRemoteView:(id)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)loadView;
-(void)remoteViewControllerServiceDidTerminate:(id)arg0 ;


@end


#endif