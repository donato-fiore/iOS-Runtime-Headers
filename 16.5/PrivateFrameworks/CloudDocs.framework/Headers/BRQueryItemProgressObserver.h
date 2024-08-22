// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRQUERYITEMPROGRESSOBSERVER_H
#define BRQUERYITEMPROGRESSOBSERVER_H

@class NSProgress;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BRQueryItem.h"

@interface BRQueryItemProgressObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id *_subscriber;
    NSProgress *_progress;
    BOOL _started;
    BOOL _isUpload;
}


@property (readonly, nonatomic) BRQueryItem *item; // ivar: _item
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler


-(id)description;
-(id)initWithItem:(id)arg0 ;
-(void)_stopObserving;
-(void)_subscribe;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setQueue:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif