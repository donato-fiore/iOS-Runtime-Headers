// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBSCREENSHOTPERSISTENCECOORDINATOR_H
#define _SBSCREENSHOTPERSISTENCECOORDINATOR_H


#import <Foundation/Foundation.h>


@interface _SBScreenshotPersistenceCoordinator : NSObject {
    NSUInteger _screenshotWriteCount;
}


@property (readonly, nonatomic) BOOL isSaving;


-(BOOL)_isWritingSnapshot;
-(void)_decrementWriteCount;
-(void)_finishedWritingScreenshot:(id)arg0 didFinishSavingWithError:(id)arg1 context:(*void)arg2 ;
-(void)_incrementWriteCount;
-(void)saveScreenshot:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif