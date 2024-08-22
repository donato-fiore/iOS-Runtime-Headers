// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DYFSSTREAMERSERVICE_H
#define DYFSSTREAMERSERVICE_H

@protocol DYFSStreamerService;

#import <Foundation/Foundation.h>


@interface DYFSStreamerService : NSObject <DYFSStreamerService>

 {
    DYFSStreamer _fs_streamer;
}




-(void)finishedSending;
-(void)initializeTransfer;
-(void)itemData:(id)arg0 attributes:(id)arg1 ;
-(void)streamAbort;


@end


#endif