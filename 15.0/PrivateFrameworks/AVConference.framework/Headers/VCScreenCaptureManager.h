// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSCREENCAPTUREMANAGER_H
#define VCSCREENCAPTUREMANAGER_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCScreenShare.h"

@interface VCScreenCaptureManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSMutableArray *_screenCaptureClients;
    VCScreenShare *_currentActiveScreenShare;
}




+(id)sharedManager;
-(id)getErrorDictionaryFromError:(id)arg0 ;
-(id)init;
-(id)screenShareDictionary:(id)arg0 ;
-(void)dealloc;
-(void)registerBlocksForService;
-(void)screenCaptureStartFor:(id)arg0 didSucceed:(BOOL)arg1 withError:(id)arg2 ;
-(void)screenCaptureStopFor:(id)arg0 didSucceed:(BOOL)arg1 withError:(id)arg2 ;


@end


#endif