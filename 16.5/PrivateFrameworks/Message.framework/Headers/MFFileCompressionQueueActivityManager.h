// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFFILECOMPRESSIONQUEUEACTIVITYMANAGER_H
#define MFFILECOMPRESSIONQUEUEACTIVITYMANAGER_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface MFFileCompressionQueueActivityManager : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)compressFilesInQueue:(id)arg0 shouldDefer:(id)arg1 ;
+(id)log;
+(void)_registerXPCActivity;
+(void)_unregisterXPCActivity;
+(void)scheduleActivityIfNeeded;
+(void)unregisterXPCActivity;


@end


#endif