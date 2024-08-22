// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMEDIASELECTIONTABLEVIEWCONTROLLER_H
#define AVMEDIASELECTIONTABLEVIEWCONTROLLER_H

@class UITableViewController, AVMediaSelectionOption;


#import "AVPlayerController.h"

@interface AVMediaSelectionTableViewController : UITableViewController {
    AVMediaSelectionOption *_selectedAudioMediaSelectionOption;
    AVMediaSelectionOption *_selectedLegibleMediaSelectionOption;
}


@property (retain, nonatomic) AVPlayerController *playerController; // ivar: _playerController


-(BOOL)_isSelectedOrCurrentAudioMediaSelectionOption:(id)arg0 ;
-(BOOL)_isSelectedOrCurrentLegibleMediaSelectionOption:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)dealloc;
-(void)playerControllerMediaSelectionChanged:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif