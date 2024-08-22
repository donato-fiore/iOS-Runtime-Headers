// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTCOMPANIONSYNCSESSION_H
#define MTCOMPANIONSYNCSESSION_H

@class NSString, NSArray, NSMutableArray, SYSession;
@protocol SYSessionDelegate, MTSyncServiceDelegate;

#import <Foundation/Foundation.h>

#import "MTCompanionSyncRequest.h"

@interface MTCompanionSyncSession : NSObject <SYSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MTSyncServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger lastIndex; // ivar: _lastIndex
@property (retain, nonatomic) NSArray *pendingChanges; // ivar: _pendingChanges
@property (retain, nonatomic) NSMutableArray *processedChanges; // ivar: _processedChanges
@property (retain, nonatomic) MTCompanionSyncRequest *request; // ivar: _request
@property (retain, nonatomic) SYSession *session; // ivar: _session
@property (readonly) Class superclass;


-(BOOL)syncSession:(id)arg0 resetDataStoreWithError:(*id)arg1 ;
-(id)initWithSession:(id)arg0 delegate:(id)arg1 ;
-(id)initWithSession:(id)arg0 request:(id)arg1 delegate:(id)arg2 ;
// -(unsigned int)syncSession:(id)arg0 enqueueChanges:(id)arg1 error:(unk)arg2  ;
-(void)syncSession:(id)arg0 applyChanges:(id)arg1 completion:(id)arg2 ;
-(void)syncSession:(id)arg0 didEndWithError:(id)arg1 ;


@end


#endif