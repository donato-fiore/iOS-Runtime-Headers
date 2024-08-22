// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVRESULT_H
#define AVRESULT_H

@class NSError;

#import <Foundation/Foundation.h>


@interface AVResult : NSObject {
    *OpaqueFigSimpleMutex _ivarAccessLock;
    NSInteger _status;
    NSError *_error;
}


@property (readonly, getter=isFailed) BOOL failed;


-(id)init;
-(void)dealloc;
-(void)getStatus:(*NSInteger)arg0 error:(*id)arg1 ;
-(void)markAsCompleted;
-(void)markAsFailedWithError:(id)arg0 ;


@end


#endif