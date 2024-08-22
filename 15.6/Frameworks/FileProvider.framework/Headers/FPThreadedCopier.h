// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPTHREADEDCOPIER_H
#define FPTHREADEDCOPIER_H

@class NSMutableArray;
@protocol OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FPThreadedCopier : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *bufferLimitSemaphore; // ivar: _bufferLimitSemaphore
@property (retain, nonatomic) NSMutableArray *buffers; // ivar: _buffers
@property (nonatomic) NSInteger numberOfInflightCopies; // ivar: _numberOfInflightCopies
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // ivar: _writeQueue


+(id)sharedCopier;
-(BOOL)copy:(id)arg0 to:(id)arg1 overwriteDestination:(BOOL)arg2 progress:(id)arg3 error:(*id)arg4 ;
-(BOOL)finishReading:(int)arg0 writing:(int)arg1 error:(*id)arg2 ;
-(id)init;
-(int)beginReading:(id)arg0 error:(*id)arg1 ;
-(int)beginWriting:(id)arg0 overwriteDestination:(BOOL)arg1 error:(*id)arg2 ;
-(void)beginOperation;
-(void)endOperation;


@end


#endif