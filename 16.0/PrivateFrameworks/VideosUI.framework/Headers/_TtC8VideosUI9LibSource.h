// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI9LIBSOURCE_H
#define _TTC8VIDEOSUI9LIBSOURCE_H

@class SwiftObject;



@interface _TtC8VideosUI9LibSource : SwiftObject {
    ? id;
    ? type;
    ? ownerName;
    ? libMenuRequests;
    ? isMPDownloadingFetchInProgress;
    ? _menuItems;
    ? _selectedMenuItem;
    ? _hasExecutedMenuFetchOnce;
}




-(void)localMPMediaLibraryContentChanged;
-(void)localMPMediaLibraryDownloadingDidChange;
-(void)refreshRentalMenu;
-(void)sideBandContentChanged;


@end


#endif