// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERARECORDINGREACHABILITYEVENTMODEL_H
#define HMDCAMERARECORDINGREACHABILITYEVENTMODEL_H

@class HMBModel, NSDate, NSNumber;



@interface HMDCameraRecordingReachabilityEventModel : HMBModel

@property (retain) NSDate *dateOfOccurrence;
@property BOOL reachable;
@property (retain) NSNumber *reachableField;


+(id)hmbExternalRecordType;
+(id)hmbProperties;
-(id)createEvent;


@end


#endif