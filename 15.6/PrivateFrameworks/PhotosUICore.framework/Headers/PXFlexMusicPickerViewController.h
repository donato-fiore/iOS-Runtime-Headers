// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFLEXMUSICPICKERVIEWCONTROLLER_H
#define PXFLEXMUSICPICKERVIEWCONTROLLER_H

@class UIViewController, NSString, NSMutableSet, UITableView;
@protocol UITableViewDelegate, UITableViewDataSource, PXFlexMusicPickerViewControllerDelegate, PXAudioAssetFetchResult;



@interface PXFlexMusicPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXFlexMusicPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableSet *pickedSongs; // ivar: _pickedSongs
@property (copy, nonatomic) NSObject<PXAudioAssetFetchResult> *songs; // ivar: _songs
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_handleCancelButton:(id)arg0 ;
-(void)_handleDoneButton:(id)arg0 ;
-(void)_updateDoneButtonEnabledness;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif