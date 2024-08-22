// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWCAMERASTREAMINGMONITORCLIENTINFO_H
#define BWCAMERASTREAMINGMONITORCLIENTINFO_H

@class PAAccessInterval;

#import <Foundation/Foundation.h>


@interface BWCameraStreamingMonitorClientInfo : NSObject {
    BOOL _streaming;
    BOOL _cameraAccessGranted;
    BOOL _terminated;
    PAAccessInterval *_accessInterval;
    ? _clientAuditToken;
}




-(void)dealloc;


@end


#endif