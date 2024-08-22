// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDOWNLOADOBSERVERMANAGER_H
#define TSPDOWNLOADOBSERVERMANAGER_H

@class NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSPDownloadObserverManager : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMapTable *_downloadObserversMap;
}




-(id)init;
-(void)addDownloadObserver:(id)arg0 forData:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)notifyDownloadObserversForData:(id)arg0 withStatus:(NSInteger)arg1 info:(id)arg2 wait:(BOOL)arg3 ;


@end


#endif