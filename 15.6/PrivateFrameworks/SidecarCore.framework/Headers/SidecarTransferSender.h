// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIDECARTRANSFERSENDER_H
#define SIDECARTRANSFERSENDER_H

@class NSArray, NSMutableArray;


#import "SidecarTransfer.h"

@interface SidecarTransferSender : SidecarTransfer {
    NSInteger _itemID;
    NSArray *_items;
    NSMutableArray *_slices;
    NSInteger _type;
}


@property (readonly, nonatomic) NSInteger type;


-(id)_resumeMessage:(SEL)arg0 ;
-(id)initWithSession:(id)arg0 requestID:(NSInteger)arg1 transferID:(NSInteger)arg2 ;
-(void)_sendCompletion:(id)arg0 ;
-(void)sendItems:(id)arg0 messageType:(NSInteger)arg1 ;


@end


#endif