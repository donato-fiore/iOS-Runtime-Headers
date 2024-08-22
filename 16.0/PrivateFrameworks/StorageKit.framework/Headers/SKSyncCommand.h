// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKSYNCCOMMAND_H
#define SKSYNCCOMMAND_H

@class NSError;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface SKSyncCommand : NSObject

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore


-(BOOL)waitAndReturnWithError:(*id)arg0 ;
-(id)init;
-(void)onCallbackWithError:(id)arg0 ;


@end


#endif