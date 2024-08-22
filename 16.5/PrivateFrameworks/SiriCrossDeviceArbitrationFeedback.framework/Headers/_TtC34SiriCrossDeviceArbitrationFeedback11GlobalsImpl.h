// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC34SIRICROSSDEVICEARBITRATIONFEEDBACK11GLOBALSIMPL_H
#define _TTC34SIRICROSSDEVICEARBITRATIONFEEDBACK11GLOBALSIMPL_H

@class NSString;
@protocol _TtP34SiriCrossDeviceArbitrationFeedback7Globals_;

#import <Foundation/Foundation.h>


@interface _TtC34SiriCrossDeviceArbitrationFeedback11GlobalsImpl : NSObject <_TtP34SiriCrossDeviceArbitrationFeedback7Globals_>

 {
    ? localDeviceAssistantIdentifier;
}


@property (nonatomic, readonly) BOOL isInternalInstall;
@property (nonatomic, copy) NSString *localDeviceAssistantIdentifier;


+(id)shared;
-(id)init;


@end


#endif