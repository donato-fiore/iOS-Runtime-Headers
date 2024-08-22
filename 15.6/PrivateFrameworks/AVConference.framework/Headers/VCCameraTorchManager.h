// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCCAMERATORCHMANAGER_H
#define VCCAMERATORCHMANAGER_H

@class AVFlashlight, NSString;
@protocol AXCameraTorchManager;

#import <Foundation/Foundation.h>


@interface VCCameraTorchManager : NSObject <AXCameraTorchManager>

 {
    AVFlashlight *_flashlight;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)openTorchDevice;
-(id)init;
-(void)closeTorchDevice;
-(void)dealloc;
-(void)turnTorch:(BOOL)arg0 ;
-(void)turnTorchOff;
-(void)turnTorchOn;


@end


#endif