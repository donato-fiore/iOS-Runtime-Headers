// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSHAREDSURFACECONTENTS_H
#define RBSHAREDSURFACECONTENTS_H

@class NSString;
@protocol CARenderValue;

#import <Foundation/Foundation.h>


@interface RBSharedSurfaceContents : NSObject <CARenderValue>

 {
    *void _surface;
    atomic<_opaque_pthread_t *> _last_update_thread;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)CA_copyRenderValue;
-(void)CA_prepareRenderValue;


@end


#endif