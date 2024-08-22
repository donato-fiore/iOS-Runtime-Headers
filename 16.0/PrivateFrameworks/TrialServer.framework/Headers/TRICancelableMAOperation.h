// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRICANCELABLEMAOPERATION_H
#define TRICANCELABLEMAOPERATION_H

@class _PASLock;
@protocol TRIFetchOpCanceling;

#import <Foundation/Foundation.h>


@interface TRICancelableMAOperation : NSObject <TRIFetchOpCanceling>

 {
    _PASLock *_lock;
}


@property (readonly, nonatomic) BOOL isCanceled;


-(id)init;
-(void)addSemaphore:(id)arg0 ;
-(void)cancel;
-(void)setCurrentAsset:(id)arg0 ;


@end


#endif