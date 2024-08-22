// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERACLIPOPERATIONDATASOURCE_H
#define HMDCAMERACLIPOPERATIONDATASOURCE_H

@class HMFObject, NSString;
@protocol HMDCameraClipOperationDataSource;



@interface HMDCameraClipOperationDataSource : HMFObject <HMDCameraClipOperationDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat operationTimeout;
@property (readonly) Class superclass;


-(id)timerWithTimeInterval:(CGFloat)arg0 options:(NSUInteger)arg1 ;
-(void)appendData:(id)arg0 toStreamingAssetAppendContext:(id)arg1 completion:(id)arg2 ;
-(void)submitOperationEvent:(id)arg0 ;


@end


#endif