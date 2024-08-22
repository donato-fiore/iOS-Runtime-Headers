// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSESSIONCACHE_H
#define SFSESSIONCACHE_H

@class NSMutableDictionary, NSUUID, NSString;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFSessionCache : NSObject <NSSecureCoding>

 {
    BOOL _activated;
    BOOL _invalidated;
    NSMutableDictionary *_sessions;
    NSMutableDictionary *_timestamps;
}


@property (nonatomic) NSUInteger capacity; // ivar: _capacity
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)cacheFull;
-(id)_sessionWithDevice:(id)arg0 activate:(BOOL)arg1 withCompletion:(id)arg2 ;
-(id)activePeerDeviceIDs;
-(id)activeSessions;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)sessionWithDevice:(id)arg0 activate:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)_ensureStarted;
-(void)_ensureStopped;
-(void)_popCache;
-(void)_sessionWasInterrupted:(id)arg0 ;
-(void)_sessionWasInvalidated:(id)arg0 ;
-(void)activate;
-(void)clearCache;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
// -(void)sendRequestWithFlags:(unsigned int)arg0 object:(id)arg1 responseHandler:(id)arg2 toDevice:(unk)arg3  ;
-(void)sendWithFlags:(unsigned int)arg0 object:(id)arg1 toDevice:(id)arg2 ;


@end


#endif