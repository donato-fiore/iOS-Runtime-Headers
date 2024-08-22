// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPLACESALBUMGADGET_H
#define PUPLACESALBUMGADGET_H

@class NSString, PXPlacesAlbumCoverProvider;
@protocol PXPlacesSnapshotFactoryDelegate, PXChangeObserver;


#import "PUAlbumGadget.h"
#import "PUAlbumListCellContentView.h"

@interface PUPlacesAlbumGadget : PUAlbumGadget <PXPlacesSnapshotFactoryDelegate, PXChangeObserver>

 {
    PUAlbumListCellContentView *_albumListCellContentView;
    NSString *_title;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXPlacesAlbumCoverProvider *placesAlbumCoverProvider; // ivar: _placesAlbumCoverProvider
@property (readonly) Class superclass;


-(id)actionManager;
-(id)albumListCellContentView;
-(id)initWithCollection:(id)arg0 albumGadgetDelegate:(id)arg1 ;
-(id)title;
-(void)_extendedTraitCollectionDidChange:(NSUInteger)arg0 ;
-(void)_updateImageInContentView:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateSubtitleInContentView:(id)arg0 animated:(BOOL)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)placesSnapshotCountDidChange;
-(void)placesSnapshotDidChange;


@end


#endif