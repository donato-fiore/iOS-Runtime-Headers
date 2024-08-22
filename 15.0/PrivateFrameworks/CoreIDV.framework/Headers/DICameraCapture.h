// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DICAMERACAPTURE_H
#define DICAMERACAPTURE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DICameraCapture : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}




+(BOOL)requireSecureCamera:(id)arg0 ;
-(id)createSecureCameraError:(id)arg0 code:(NSInteger)arg1 ;
-(id)init;
-(void)captureWithSecureCamera:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;


@end


#endif