// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINTERMEDIATEJPEGCOMPRESSEDBUFFERASSOCIATEDSEMAPHORE_H
#define BWINTERMEDIATEJPEGCOMPRESSEDBUFFERASSOCIATEDSEMAPHORE_H

@class NSString;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface BWIntermediateJPEGCompressedBufferAssociatedSemaphore : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSString *_name;
    ? _pts;
}




-(id)initWithSemaphore:(id)arg0 name:(id)arg1 presentationTimeStamp:(struct ? )arg2 ;
-(void)dealloc;


@end


#endif