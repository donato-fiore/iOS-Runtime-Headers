// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTURESYNCHRONIZEDPOINTCLOUDDATA_H
#define AVCAPTURESYNCHRONIZEDPOINTCLOUDDATA_H



#import "AVCaptureSynchronizedData.h"
#import "AVPointCloudData.h"

@interface AVCaptureSynchronizedPointCloudData : AVCaptureSynchronizedData {
    AVPointCloudData *_pointCloudData;
    BOOL _pointCloudDataWasDropped;
    NSInteger _droppedReason;
}


@property (readonly) NSInteger droppedReason;
@property (readonly) AVPointCloudData *pointCloudData;
@property (readonly) BOOL pointCloudDataWasDropped;


-(id)_initWithPointCloudDataBuffer:(id)arg0 timestamp:(struct ? )arg1 pointCloudDataWasDropped:(BOOL)arg2 droppedReason:(NSInteger)arg3 ;
-(void)dealloc;


@end


#endif