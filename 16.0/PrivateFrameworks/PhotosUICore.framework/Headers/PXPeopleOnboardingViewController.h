// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEONBOARDINGVIEWCONTROLLER_H
#define PXPEOPLEONBOARDINGVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PXChangeObserver;


#import "PXPeopleSectionedDataSource.h"
#import "PXPeopleProgressManager.h"

@interface PXPeopleOnboardingViewController : UIViewController <PXChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger onboardStatus; // ivar: _onboardStatus
@property (retain, nonatomic) PXPeopleSectionedDataSource *peopleDataSource; // ivar: _peopleDataSource
@property (retain, nonatomic) PXPeopleProgressManager *progressManager; // ivar: _progressManager
@property (readonly) Class superclass;


-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)_emptyPlaceholderTextAttributesFromTextProperties:(id)arg0 ;
-(id)_sharedLibraryEmptyPeopleAlbumMessage;
-(id)_sharedLibraryEmptyPeopleAlbumTitle;
-(id)_textAttachmentImageForSystemImageNamed:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 progressManager:(id)arg1 ;
-(id)px_navigationDestination;
-(void)_progressChanged:(id)arg0 ;
-(void)_pushToPeopleHome;
-(void)_updateNavigationBar;
-(void)_updateStatusViewForStatus:(NSUInteger)arg0 ;
-(void)_updateStatusViewSharedLibrary;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif