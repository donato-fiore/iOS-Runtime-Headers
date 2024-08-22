// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIDECARTRANSFERRECEIVER_H
#define SIDECARTRANSFERRECEIVER_H

@class NSMutableDictionary, NSMutableArray;


#import "SidecarTransfer.h"

@interface SidecarTransferReceiver : SidecarTransfer {
    NSMutableDictionary *_groups;
    NSMutableArray *_orderedGroups;
}




-(id)_resumeMessage:(SEL)arg0 ;
-(id)initWithSession:(id)arg0 requestID:(NSInteger)arg1 ;
-(void)handleMessage:(id)arg0 ;


@end


#endif