// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFRECORDINGSTATUSMANAGER_H
#define WFRECORDINGSTATUSMANAGER_H

@class SBSStatusBarStyleOverridesAssertion;

#import <Foundation/Foundation.h>


@interface WFRecordingStatusManager : NSObject

@property (retain, nonatomic) SBSStatusBarStyleOverridesAssertion *assertion; // ivar: _assertion
@property (nonatomic, getter=isRecording) BOOL recording;


+(id)sharedManager;
-(void)acquireAssertion;
-(void)invalidateAssertion;


@end


#endif