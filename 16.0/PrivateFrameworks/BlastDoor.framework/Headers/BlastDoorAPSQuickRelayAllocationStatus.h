// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORAPSQUICKRELAYALLOCATIONSTATUS_H
#define BLASTDOORAPSQUICKRELAYALLOCATIONSTATUS_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface BlastDoorAPSQuickRelayAllocationStatus : NSObject {
    ? aPSQuickRelayAllocationStatus;
}


@property (nonatomic, readonly) NSInteger allocationStatus;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *destinationId;
@property (nonatomic, readonly) BOOL has_allocationStatus;
@property (nonatomic, readonly) BOOL has_participantId;
@property (nonatomic, readonly) NSInteger participantId;
@property (nonatomic, readonly) NSData *token;


-(id)init;


@end


#endif