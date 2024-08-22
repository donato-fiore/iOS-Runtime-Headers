// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMEDIASOURCELISTVIEWCONTROLLER_H
#define HUMEDIASOURCELISTVIEWCONTROLLER_H

@class MPPlaybackArchive;
@protocol HUMediaPickerDelegate, HUMediaSourceListDelegate;


#import "HUItemTableViewController.h"

@interface HUMediaSourceListViewController : HUItemTableViewController <HUMediaPickerDelegate>



@property (retain) MPPlaybackArchive *currentPlaybackSelection; // ivar: _currentPlaybackSelection
@property (weak, nonatomic) NSObject<HUMediaSourceListDelegate> *delegate; // ivar: _delegate


-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHaveFullLengthBottomSeparatorForSection:(NSInteger)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)errorAlertControllerForResolveError:(id)arg0 ;
-(id)initForMediaProfileContainers:(id)arg0 forTarget:(NSUInteger)arg1 ;
-(void)dismissViewController;
-(void)mediaPickerDidCancel;
-(void)mediaPickerDidPickPlaybackArchive:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif