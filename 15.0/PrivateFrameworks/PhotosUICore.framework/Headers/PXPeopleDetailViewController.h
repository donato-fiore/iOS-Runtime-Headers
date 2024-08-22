// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPEOPLEDETAILVIEWCONTROLLER_H
#define PXPEOPLEDETAILVIEWCONTROLLER_H

@class NSString, NSArray;
@protocol PXPhotoLibraryUIChangeObserver;


#import "PXPhotosDetailsUIViewController.h"

@interface PXPeopleDetailViewController : PXPhotosDetailsUIViewController <PXPhotoLibraryUIChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *people; // ivar: _people
@property (readonly) Class superclass;


-(BOOL)pu_shouldOptOutFromChromelessBars;
-(BOOL)shouldUpdateStatusBarTitle;
-(id)initWithPeople:(id)arg0 ;
-(id)initWithPeople:(id)arg0 options:(NSUInteger)arg1 ;
-(void)_launchNaming:(id)arg0 ;
-(void)_replaceSelfWithNewDetailViewForPerson:(id)arg0 ;
-(void)_setupHeader;
-(void)_updateDataSourceWithCollectionForPerson:(id)arg0 ;
-(void)_updateHeader;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;
-(void)presentBootstrapViewControllerWithType:(NSUInteger)arg0 ;
-(void)refreshName;
-(void)viewDidLoad;


@end


#endif