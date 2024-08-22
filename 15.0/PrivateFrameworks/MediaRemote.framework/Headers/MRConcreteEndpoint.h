// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRCONCRETEENDPOINT_H
#define MRCONCRETEENDPOINT_H

@class NSString, NSArray;
@protocol OS_dispatch_queue;


#import "MRAVEndpoint.h"
#import "MRExternalDevice.h"
#import "MRAVOutputDevice.h"

@interface MRConcreteEndpoint : MRAVEndpoint {
    NSString *_uniqueIdentifier;
    NSArray *_outputDevices;
    MRExternalDevice *_externalDevice;
    MRAVOutputDevice *_designatedGroupLeader;
    NSInteger _connectionType;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (copy, nonatomic) NSArray *outputDevices;


-(BOOL)canModifyGroupMembership;
-(BOOL)isProxyGroupPlayer;
-(NSInteger)connectionType;
-(id)designatedGroupLeader;
-(id)externalDevice;
-(id)initWithDesignatedGroupLeader:(id)arg0 outputDevices:(id)arg1 preferredSuffix:(id)arg2 ;
-(id)initWithDesignatedGroupLeader:(id)arg0 outputDevices:(id)arg1 preferredSuffix:(id)arg2 connectionType:(NSInteger)arg3 ;
-(id)uniqueIdentifier;
-(void)setExternalDevice:(id)arg0 ;


@end


#endif