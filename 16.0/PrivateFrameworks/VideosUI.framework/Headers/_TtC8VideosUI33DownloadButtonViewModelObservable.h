// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI33DOWNLOADBUTTONVIEWMODELOBSERVABLE_H
#define _TTC8VIDEOSUI33DOWNLOADBUTTONVIEWMODELOBSERVABLE_H


#import <Foundation/Foundation.h>

#import "VUIDownloadButtonViewModel.h"

@interface _TtC8VideosUI33DownloadButtonViewModelObservable : NSObject {
    ? downloadStateObservation;
    ? downloadStateSubject;
}


@property (nonatomic, readonly) VUIDownloadButtonViewModel *downloadButtonViewModel; // ivar: downloadButtonViewModel


-(id)init;
-(void)dealloc;


@end


#endif