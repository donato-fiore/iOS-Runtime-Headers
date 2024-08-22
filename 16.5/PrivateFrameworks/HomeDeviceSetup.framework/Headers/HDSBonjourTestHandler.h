// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSBONJOURTESTHANDLER_H
#define HDSBONJOURTESTHANDLER_H

@class CUBonjourAdvertiser, SFSession;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDSBonjourTestHandler : NSObject {
    CUBonjourAdvertiser *_advertiser;
    BOOL _invalidateCalled;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) SFSession *sfSession; // ivar: _sfSession


-(id)init;
-(void)_handleStart:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleStop:(id)arg0 responseHandler:(id)arg1 ;
-(void)activate;
-(void)invalidate;


@end


#endif