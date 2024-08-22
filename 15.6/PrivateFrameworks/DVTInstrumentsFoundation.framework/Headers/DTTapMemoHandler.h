// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTTAPMEMOHANDLER_H
#define DTTAPMEMOHANDLER_H

@protocol OS_dispatch_queue, DTTapMemoHandlerDelegate;

#import <Foundation/Foundation.h>

#import "DTTapConfig.h"

@interface DTTapMemoHandler : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _sentRecordingInfo;
    id<DTTapMemoHandlerDelegate> *_delegate;
}


@property (readonly, retain, nonatomic) DTTapConfig *config; // ivar: _config


-(id)handleMemo:(id)arg0 ;
-(id)initWithConfig:(id)arg0 delegate:(id)arg1 ;
-(void)resume;
-(void)suspend;


@end


#endif