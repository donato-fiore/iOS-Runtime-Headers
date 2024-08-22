// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSCUPIDSTATEMACHINE_H
#define MSCUPIDSTATEMACHINE_H

@class NSString, NSMutableDictionary;
@protocol MSStreamsProtocolDelegate;

#import <Foundation/Foundation.h>

#import "MSBackoffManager.h"

@interface MSCupidStateMachine : NSObject <MSStreamsProtocolDelegate>

 {
    NSString *_manifestPath;
    MSBackoffManager *_streamsBackoffManager;
    MSBackoffManager *_MMCSBackoffManager;
}


@property (retain, nonatomic) NSMutableDictionary *_userManifest; // ivar: _userManifest
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasDeactivated; // ivar: _hasDeactivated
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *personID; // ivar: _personID
@property (readonly) Class superclass;


-(id)_latestNextActivityDate;
-(id)initWithPersonID:(id)arg0 ;
-(void)_abort;
-(void)_backoffMMCSBackoffTimer;
-(void)_backoffStreamsBackoffTimer;
-(void)_commitUserManifest;
-(void)_didReceiveMMCSRetryAfterDate:(id)arg0 ;
-(void)_didReceiveStreamsRetryAfterDate:(id)arg0 ;
-(void)_forget;
-(void)_resetMMCSBackoffTimer;
-(void)_resetStreamsBackoffTimer;
-(void)_updateMasterManifest;
-(void)deactivate;
-(void)dealloc;
-(void)forget;
-(void)protocol:(id)arg0 didReceiveRetryAfterDate:(id)arg1 ;


@end


#endif