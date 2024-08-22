// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWURLSESSIONSTREAMTASK_H
#define NWURLSESSIONSTREAMTASK_H



#import "NWURLSessionTask.h"

@interface NWURLSessionStreamTask : NWURLSessionTask



-(BOOL)isKindOfClass:(Class)arg0 ;
-(void)captureStreams;
-(void)closeRead;
-(void)closeWrite;
-(void)readDataOfMinLength:(NSUInteger)arg0 maxLength:(NSUInteger)arg1 timeout:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)startSecureConnection;
-(void)writeData:(id)arg0 timeout:(CGFloat)arg1 completionHandler:(id)arg2 ;


@end


#endif