// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUALBUMPICKERVIEWCONTROLLERSPEC_H
#define PUALBUMPICKERVIEWCONTROLLERSPEC_H


#import <Foundation/Foundation.h>

#import "PUAlbumListViewControllerSpec.h"
#import "PUAlbumListViewController.h"

@interface PUAlbumPickerViewControllerSpec : NSObject

@property (readonly, nonatomic) PUAlbumListViewControllerSpec *albumListViewControllerSpec; // ivar: _albumListViewControllerSpec
@property (readonly, nonatomic) PUAlbumListViewController *newAlbumListViewController;
@property (readonly, nonatomic) NSUInteger supportedInterfaceOrientations; // ivar: _supportedInterfaceOrientations


-(void)configureSessionInfo:(id)arg0 ;


@end


#endif