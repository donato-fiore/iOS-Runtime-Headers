// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7MUSICUI28DOWNLOADSTATECHANGEPUBLISHER_H
#define _TTC7MUSICUI28DOWNLOADSTATECHANGEPUBLISHER_H

@class SwiftObject;



@interface _TtC7MusicUI28DownloadStateChangePublisher : SwiftObject {
    ? downloadManager;
    ? updateDownloadsTask;
    ? updateDownloadProgressTask;
    ? itemAddedNotificationObserver;
    ? itemDoneNotificationObserver;
    ? internalDownloadItems;
    ? activeDownloadingContainers;
    ? lock;
    ? onContentReloadTrigger;
}






@end


#endif