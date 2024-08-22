// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVIEWCONTROLLERFACTORY_H
#define MSVIEWCONTROLLERFACTORY_H

@class SUViewControllerFactory;



@interface MSViewControllerFactory : SUViewControllerFactory



-(id)newDownloadManagerOptions;
-(id)newDownloadsViewController;
-(id)newNetworkLockoutViewControllerWithSection:(id)arg0 ;
-(id)newPlaceholderViewController;
-(id)newViewControllerForPage:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)newViewControllerForTrackList:(id)arg0 ;
-(id)newVolumeViewController;


@end


#endif