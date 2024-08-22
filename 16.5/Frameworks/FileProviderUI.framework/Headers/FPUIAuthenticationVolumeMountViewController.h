// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPUIAUTHENTICATIONVOLUMEMOUNTVIEWCONTROLLER_H
#define FPUIAUTHENTICATIONVOLUMEMOUNTVIEWCONTROLLER_H

@class NSArray, NSMutableIndexSet;


#import "FPUIAuthenticationTableViewController.h"

@interface FPUIAuthenticationVolumeMountViewController : FPUIAuthenticationTableViewController {
    NSArray *_allVolumeRepresentations;
    NSArray *_mountedVolumeIdentifiers;
    NSMutableIndexSet *_selectedVolumesIndexes;
}




-(BOOL)_canMoveToNextStep;
-(id)defaultRightBarButtonItem;
-(id)initWithVolumes:(id)arg0 mountedVolumeIdentifiers:(id)arg1 ;
-(id)tableCellCheckmarkImageDisabled;
-(void)_done:(id)arg0 ;
-(void)selectedVolumesIndexesDidChange;
-(void)setupTableViewSections;
-(void)viewDidLoad;


@end


#endif