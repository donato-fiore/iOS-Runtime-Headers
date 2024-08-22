// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVRCVOICERECORDER_H
#define TVRCVOICERECORDER_H


#import <Foundation/Foundation.h>

#import "TVRCDevice.h"

@interface TVRCVoiceRecorder : NSObject {
    TVRCDevice *_device;
    BOOL _recordsAutomatically;
}


@property (nonatomic) BOOL recordsAutomatically;


-(id)_initWithDevice:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif