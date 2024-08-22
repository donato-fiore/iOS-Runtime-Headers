// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUALBUMSGADGETVIEWCONTROLLER_H
#define PUALBUMSGADGETVIEWCONTROLLER_H

@class PXGadgetUIViewController, NSString, PXProgrammaticNavigationDestination;
@protocol PXChangeObserver, PXNavigableCollectionContainer;


#import "PUSessionInfo.h"

@interface PUAlbumsGadgetViewController : PXGadgetUIViewController <PXChangeObserver, PXNavigableCollectionContainer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination; // ivar: _px_navigationDestination
@property (retain, nonatomic) PUSessionInfo *sessionInfo; // ivar: _sessionInfo
@property (readonly) Class superclass;


-(BOOL)_canNavigateToCollection:(id)arg0 skipGadgets:(BOOL)arg1 ;
-(BOOL)allowsBarManagement;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canNavigateToCollection:(id)arg0 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)navigationHelperCanCurrentlyNavigate:(id)arg0 ;
-(NSInteger)scrollAnimationIdentifier;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)_createPlusButton;
-(id)_navigableGadgetForCollection:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithLayout:(id)arg0 dataSourceManager:(id)arg1 ;
-(id)px_gridPresentation;
-(void)_handleDoneButton:(id)arg0 ;
-(void)_navigateToCollection:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_updateNavigationBar;
-(void)configureSectionHeader:(id)arg0 ;
-(void)navigateToCollection:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)newAlbum:(id)arg0 ;
-(void)newFolder:(id)arg0 ;
-(void)newSharedAlbum:(id)arg0 ;
-(void)newSmartAlbum:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)provideViewControllersForDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif