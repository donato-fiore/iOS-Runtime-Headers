// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRFPITEMPROGRESSOBSERVER_H
#define BRFPITEMPROGRESSOBSERVER_H

@class NSProgress, NSNumber, FPItemID;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BRFPItemProgressObserver : NSObject {
    BOOL _started;
    NSObject<OS_dispatch_queue> *_queue;
    NSProgress *_downloadProgress;
    NSProgress *_uploadProgress;
}


@property (readonly, nonatomic) NSNumber *downloadPercentCompleted;
@property (readonly, nonatomic) FPItemID *fpItemID; // ivar: _fpItemID
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (readonly, nonatomic) NSNumber *uploadPercentCompleted;


-(id)description;
-(id)initWithFPItem:(id)arg0 queue:(id)arg1 ;
-(void)_startObservingProgress:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)start;
-(void)stop;
-(void)updateWithFPItem:(id)arg0 ;


@end


#endif