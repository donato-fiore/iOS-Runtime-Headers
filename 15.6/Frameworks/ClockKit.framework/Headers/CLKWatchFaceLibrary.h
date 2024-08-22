// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKWATCHFACELIBRARY_H
#define CLKWATCHFACELIBRARY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CLKWatchFaceLibrary : NSObject {
    NSObject<OS_dispatch_queue> *_helperQueue;
}




+(BOOL)_unzipFile:(id)arg0 toPath:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 ;
+(id)sharedInstance;
-(id)init;
-(void)_addWatchFaceAtURL:(id)arg0 shouldValidate:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_importWatchFaceAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_validateWatchFaceAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)addWatchFaceAtURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif