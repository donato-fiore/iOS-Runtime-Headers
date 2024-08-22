// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXMOSLOGPROBE_H
#define MXMOSLOGPROBE_H

@class OSActivityStream, NSString;
@protocol OSActivityStreamDelegate;


#import "MXMProbe.h"

@interface MXMOSLogProbe : MXMProbe <OSActivityStreamDelegate>

 {
    OSActivityStream *_activityStream;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)connectedDevices;
+(id)hostDevice;
+(id)probeHostOSLog;
-(BOOL)activityStream:(id)arg0 results:(id)arg1 ;
-(id)initWithTargetDevice:(id)arg0 ;
-(void)_beginUpdates;
-(void)_stopUpdates;
-(void)streamDidFail:(id)arg0 error:(id)arg1 ;
-(void)streamDidStart:(id)arg0 ;
-(void)streamDidStop:(id)arg0 ;


@end


#endif