// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCSCREENCAPTURETESTDELEGATE_H
#define AVCSCREENCAPTURETESTDELEGATE_H

@class NSString;
@protocol AVCScreenCaptureDelegate;

#import <Foundation/Foundation.h>


@interface AVCScreenCaptureTestDelegate : NSObject <AVCScreenCaptureDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)screenCapture:(id)arg0 didStart:(BOOL)arg1 withError:(id)arg2 ;
-(void)screenCapture:(id)arg0 didStop:(BOOL)arg1 withError:(id)arg2 ;
-(void)serverDidDisconnect:(id)arg0 ;


@end


#endif