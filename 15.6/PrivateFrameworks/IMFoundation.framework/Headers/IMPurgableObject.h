// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMPURGABLEOBJECT_H
#define IMPURGABLEOBJECT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMPurgableObject : NSObject {
    id *_instanceObject;
    id *_setupBlock;
    id *_cleanupBlock;
    NSObject<OS_dispatch_queue> *_queue;
}




// -(id)initWithSetupBlock:(id)arg0 cleanupBlock:(unk)arg1 queue:(id)arg2  ;
-(id)instance;
-(void)_cleanupInstance;
-(void)_receivedMemoryWarning:(id)arg0 ;
-(void)_setupInstance;
-(void)dealloc;


@end


#endif