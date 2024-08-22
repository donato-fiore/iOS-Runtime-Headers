// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKTILEOVERLAYREQUESTEROP_H
#define MKTILEOVERLAYREQUESTEROP_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_MKOverlayTileRequester.h"

@interface MKTileOverlayRequesterOp : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
}


@property (retain, nonatomic) id *data; // ivar: _data
@property (weak, nonatomic) _MKOverlayTileRequester *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (nonatomic) _GEOTileKey key; // ivar: _key


-(id)init;
-(void)_cancel;
-(void)_start;
-(void)cancel;
-(void)start;


@end


#endif