// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMDFMIPSHAREDSTATEMANAGER_H
#define FMDFMIPSHAREDSTATEMANAGER_H

@class NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FMDFMIPSharedStateManager : NSObject

@property (retain) NSURL *fmipSharedFileStaticURL; // ivar: _fmipSharedFileStaticURL
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateManagerQueue; // ivar: _stateManagerQueue


+(id)sharedInstance;
-(BOOL)_removeSharedInfo;
-(BOOL)_writeSharedInfo:(id)arg0 ;
-(BOOL)fmipActive;
-(NSUInteger)lostModeType;
-(id)_fmipSharedFileURL;
-(id)_readSharedInfo;
-(id)init;
-(void)recalculateLostMode;
-(void)setFMiPActive:(BOOL)arg0 ;


@end


#endif