// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKSTATECAPTUREHANDLER_H
#define VKSTATECAPTUREHANDLER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VKStateCaptureHandler : NSObject {
    NSString *_name;
    NSUInteger _handle;
    function<NSString *()> _callback;
}




+(struct os_state_data_s *)stateDataForDictionary:(id)arg0 title:(id)arg1 ;
-(id)initWithQueue:(id)arg0 withName:(id)arg1 withCallback:(struct function<NSString *()> )arg2 ;
-(struct os_state_data_s *)_stateCapture;
-(void)_registerHandlerforStateCapture:(id)arg0 ;
-(void)_unregisterHandlerforStateCapture;
-(void)dealloc;


@end


#endif