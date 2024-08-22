// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWCAMERASTREAMINGMONITORCLIENTINFO_H
#define BWCAMERASTREAMINGMONITORCLIENTINFO_H

@class RBSProcessHandle, PAAccessInterval;

#import <Foundation/Foundation.h>


@interface BWCameraStreamingMonitorClientInfo : NSObject {
    BOOL _streaming;
    BOOL _cameraAccessGranted;
    BOOL _terminated;
    RBSProcessHandle *_processHandle;
    PAAccessInterval *_accessInterval;
}




-(void)dealloc;


@end


#endif