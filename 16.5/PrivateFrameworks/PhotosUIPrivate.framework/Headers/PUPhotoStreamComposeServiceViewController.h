// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOSTREAMCOMPOSESERVICEVIEWCONTROLLER_H
#define PUPHOTOSTREAMCOMPOSESERVICEVIEWCONTROLLER_H

@class PXPhotoStreamComposeServiceViewController, NSArray, NSString;
@protocol PUPhotoStreamsAlbumsTableViewControllerDelegate, PUPhotoStreamCreateTitleDelegate, PUCloudSharedCreateAlbumViewControllerDelegate, SLSheetViewHostProtocol, PLAlbumProtocol, PLAlbumContainer;



@interface PUPhotoStreamComposeServiceViewController : PXPhotoStreamComposeServiceViewController <PUPhotoStreamsAlbumsTableViewControllerDelegate, PUPhotoStreamCreateTitleDelegate, PUCloudSharedCreateAlbumViewControllerDelegate, SLSheetViewHostProtocol>

 {
    ? _delegateFlags;
    NSObject<PLAlbumProtocol> *_selectedAlbum;
    NSArray *_actions;
    NSObject<PLAlbumContainer> *_albumList;
    BOOL _inCreateNewAlbum;
    NSArray *_recipients;
    BOOL _shouldShowPost;
    NSString *_itemCountString;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *startingContentText; // ivar: _startingContentText
@property (readonly) Class superclass;


-(BOOL)isContentValid;
-(id)_imageFromStreamShareSource:(id)arg0 ;
-(id)albumListAction;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStartingContentText:(id)arg0 ;
-(id)serviceIconImage;
-(id)sheetActions;
-(id)title;
-(void)_pushTitleController;
-(void)albumStreamingCreateViewController:(id)arg0 didSucceed:(BOOL)arg1 ;
-(void)controller:(id)arg0 didSelectAlbum:(id)arg1 ;
-(void)controllerWillCreateNewAlbum:(id)arg0 ;
-(void)failWithError:(id)arg0 ;
-(void)send;
-(void)setAssetsToShare:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setSourcesToShare:(id)arg0 ;
-(void)shouldShowNetworkActivityIndicator:(id)arg0 ;
-(void)titleController:(id)arg0 didSetTitle:(id)arg1 ;
-(void)titleControllerDidCancel:(id)arg0 ;
-(void)userDidCancel;
-(void)userDidPost;
-(void)viewDidLoad;


@end


#endif