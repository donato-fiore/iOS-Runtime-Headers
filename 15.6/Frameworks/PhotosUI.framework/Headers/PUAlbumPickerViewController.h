// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUALBUMPICKERVIEWCONTROLLER_H
#define PUALBUMPICKERVIEWCONTROLLER_H

@class UIViewController, PHCollectionList, UINavigationController, NSString;
@protocol PUSessionInfoObserver;


#import "PUAlbumListViewController.h"
#import "PUAlbumPickerSessionInfo.h"
#import "PUAlbumPickerViewControllerSpec.h"

@interface PUAlbumPickerViewController : UIViewController <PUSessionInfoObserver>



@property (retain, nonatomic, setter=_setAlbumListViewController:) PUAlbumListViewController *_albumListViewController; // ivar: __albumListViewController
@property (retain, nonatomic, setter=_setSessionInfo:) PUAlbumPickerSessionInfo *albumPickerSessionInfo; // ivar: _albumPickerSessionInfo
@property (retain, nonatomic) PHCollectionList *collectionList; // ivar: _collectionList
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic, setter=_setContentNavigationController:) UINavigationController *contentNavigationController; // ivar: _contentNavigationController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didLoadSubviews; // ivar: _didLoadSubviews
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, setter=_setSpec:) PUAlbumPickerViewControllerSpec *spec; // ivar: _spec
@property (readonly) Class superclass;


-(BOOL)shouldAutorotate;
-(NSInteger)_preferredWhitePointAdaptivityStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSessionInfo:(id)arg0 ;
-(id)initWithSpec:(id)arg0 sessionInfo:(id)arg1 ;
-(void)_loadSubviewsIfNeeded;
-(void)dealloc;
-(void)sessionInfoStatusDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif