// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NTKCFACEDETAILALBUMCHOOSERVIEWCONTROLLER_H
#define _NTKCFACEDETAILALBUMCHOOSERVIEWCONTROLLER_H

@class PUAlbumListViewController, NSMutableArray, PHAssetCollection;
@protocol _NTKCFaceDetailAlbumChooserViewControllerDelegate;


#import "NTKCompanionSyncedAlbumEditor.h"
#import "NTKFace.h"

@interface _NTKCFaceDetailAlbumChooserViewController : PUAlbumListViewController {
    NSMutableArray *_allAlbums;
    PHAssetCollection *_syncedAlbum;
    PHAssetCollection *_selectedAlbum;
}


@property (weak, nonatomic) NSObject<_NTKCFaceDetailAlbumChooserViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NTKCompanionSyncedAlbumEditor *editor; // ivar: _editor
@property (retain, nonatomic) NTKFace *face; // ivar: _face
@property (nonatomic) BOOL inGallery; // ivar: _inGallery


+(void)initialize;
-(BOOL)_shouldShowAggregateItem;
-(BOOL)shouldShowAllPhotosItem;
-(BOOL)showAddNewAlbumPlaceholder;
-(id)_title;
-(id)initWithPhotosEditor:(id)arg0 forFace:(id)arg1 inGallery:(BOOL)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_appendCollectionsWithType:(NSInteger)arg0 subtype:(NSInteger)arg1 ;
-(void)_reloadData;
-(void)_set_allAlbums;
-(void)_set_selectedAlbum;
-(void)sessionInfoStatusDidChange:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif