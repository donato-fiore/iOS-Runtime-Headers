// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOSTREAMALBUMSTABLEVIEWCONTROLLER_H
#define PUPHOTOSTREAMALBUMSTABLEVIEWCONTROLLER_H

@class UITableViewController, NSOrderedSet, NSMutableSet;
@protocol PUPhotoStreamsAlbumsTableViewControllerDelegate;



@interface PUPhotoStreamAlbumsTableViewController : UITableViewController {
    NSOrderedSet *_albumsOrderedSet;
    NSMutableSet *_selectedAlbumGuids;
}


@property (nonatomic) BOOL allowsMutlipleSelection; // ivar: _allowsMutlipleSelection
@property (weak, nonatomic) NSObject<PUPhotoStreamsAlbumsTableViewControllerDelegate> *pickerDelegate; // ivar: _pickerDelegate


+(id)_albumsComparator:(SEL)arg0 ;
+(id)albumListForContentMode:(int)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)posterImageForAlbum:(id)arg0 imageView:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )contentSizeForViewInPopover;
-(void)addSelectedCloudGuid:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)reloadActions;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif