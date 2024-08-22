// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIESPRESSORUNNER_H
#define VIESPRESSORUNNER_H

@class NSString, NSArray, NSMutableData;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface VIEspressoRunner : NSObject {
    CGSize _expectedInputSize;
    NSObject<OS_os_log> *_log;
    NSString *_imageInputName;
    NSArray *_outputNames;
    *void _context;
    *void _plan;
    ? _net;
    NSMutableData *_outputBuffers;
}




-(id)initWithMLNetURL:(id)arg0 expectedInputSize:(struct CGSize )arg1 imageInputName:(id)arg2 outputNames:(id)arg3 preferredMetalDevice:(id)arg4 usesCPUOnly:(BOOL)arg5 ;
-(id)processFrame:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)set:(char *)arg0 error:(*id)arg1 ;


@end


#endif