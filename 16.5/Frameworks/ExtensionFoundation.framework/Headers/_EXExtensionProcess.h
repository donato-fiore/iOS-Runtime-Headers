// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXEXTENSIONPROCESS_H
#define _EXEXTENSIONPROCESS_H

@class NSString;
@protocol _EXExtensionProcessObserver;

#import <Foundation/Foundation.h>

#import "_EXExtensionProcessHandle.h"

@interface _EXExtensionProcess : NSObject <_EXExtensionProcessObserver>



@property (readonly) ? auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) _EXExtensionProcessHandle *internalExtensionProcess; // ivar: _internalExtensionProcess
@property (copy) id *invalidationHandler; // ivar: _invalidationHandler
@property os_unfair_lock_s invalidationHandlerLock; // ivar: _invalidationHandlerLock
@property (readonly) Class superclass;


+(id)_extensionProcessBackgroundQueue;
+(id)extensionProcessWithConfiguration:(id)arg0 error:(*id)arg1 ;
+(void)extensionProcessWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithInternalExtensionProcess:(id)arg0 invalidationHandler:(id)arg1 ;
-(id)makeXPCConnectionWithError:(*id)arg0 ;
-(id)newXPCConnectionWithError:(*id)arg0 ;
-(int)pid;
-(void)invalidate;
-(void)processDidInvalidate:(id)arg0 ;


@end


#endif