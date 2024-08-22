// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGNSURLSESSION_H
#define FIGNSURLSESSION_H

@class NSURLSessionConfiguration, NSString, NSOperationQueue, NSURLSession;
@protocol NSURLSessionDataDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FigNSURLSession : NSObject {
    NSURLSessionConfiguration *_configuration;
    *OpaqueFigCFWeakReferenceHolder _weakAssertion;
}


@property (nonatomic) int assertionCount; // ivar: _assertionCount
@property (readonly, nonatomic) NSString *clientBundleIdentifier; // ivar: _clientBundleIdentifier
@property (readonly, nonatomic) NSString *clientPersonaIdentifier; // ivar: _clientPersonaIdentifier
@property (readonly, nonatomic) NSObject<NSURLSessionDataDelegate> *dataDelegate; // ivar: _dataDelegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) BOOL doomCheckScheduled; // ivar: _doomCheckScheduled
@property (nonatomic) NSInteger doomTime; // ivar: _doomTime
@property (readonly, nonatomic) NSOperationQueue *opQueue; // ivar: _opQueue
@property (readonly, nonatomic) NSURLSession *session; // ivar: _session


-(id)initWithClientBundleIdentifier:(id)arg0 clientPersonaIdentifier:(id)arg1 dispatchQueue:(id)arg2 ;
-(struct FigOpaqueAssertion *)acquireAssertion;
-(void)dealloc;
-(void)debug;


@end


#endif