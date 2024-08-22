// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPRINSTALLRELAY_H
#define SPRINSTALLRELAY_H

@protocol SPRInstallDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SPRInstallRelay : NSObject <SPRInstallDelegate>



@property (readonly) NSObject<SPRInstallDelegate> *base; // ivar: _base
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithBase:(id)arg0 queue:(id)arg1 ;
-(void)onFailureWithError:(id)arg0 ;
-(void)onSuccessWithInstallData:(id)arg0 ;
-(void)onUpdateWithEvent:(NSInteger)arg0 ;
-(void)onUpdateWithEvent:(NSInteger)arg0 progress:(NSInteger)arg1 ;


@end


#endif