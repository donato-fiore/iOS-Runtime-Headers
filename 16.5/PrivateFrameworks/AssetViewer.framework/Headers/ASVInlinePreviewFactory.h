// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASVINLINEPREVIEWFACTORY_H
#define ASVINLINEPREVIEWFACTORY_H

@class UIViewController, NSExtension;
@protocol OS_dispatch_queue, ARQLInlineService3;

#import <Foundation/Foundation.h>


@interface ASVInlinePreviewFactory : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    UIViewController *_sharedRemoteViewController;
}


@property (readonly, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly, nonatomic) NSObject<ARQLInlineService3> *sharedInlineService; // ivar: _sharedInlineService


+(id)shared;
-(id)init;
-(void)_getSharedInlineServiceWithCompletionHandler:(id)arg0 ;
-(void)createFullscreenInstanceWithUUID:(id)arg0 initialFrame:(struct CGRect )arg1 previewOptions:(id)arg2 completionHandler:(id)arg3 ;
-(void)getSharedInlineServiceWithCompletionHandler:(id)arg0 ;
-(void)handleInterruptionOrInvalidation;


@end


#endif