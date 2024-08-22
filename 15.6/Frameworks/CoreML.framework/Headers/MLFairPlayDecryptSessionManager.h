// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLFAIRPLAYDECRYPTSESSIONMANAGER_H
#define MLFAIRPLAYDECRYPTSESSIONMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MLFairPlayDecryptSessionManager : NSObject

@property (readonly, retain) NSMutableDictionary *modelPathToSessionID; // ivar: _modelPathToSessionID
@property (readonly) *? sessionContext; // ivar: _sessionContext
@property (readonly, retain) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue


-(BOOL)startDecryptionOfModelAtPath:(id)arg0 usingKeyBlob:(id)arg1 error:(*id)arg2 ;
-(BOOL)stopDecryptionOfModelAtPath:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(int)stopDecryptionOfModelAtPath:(id)arg0 ;
-(void)dealloc;


@end


#endif