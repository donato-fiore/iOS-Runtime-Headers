// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLPROXYSESSION_H
#define CPLPROXYSESSION_H

@class NSString;
@protocol CPLChangeSessionImplementation;


#import "CPLPlatformObject.h"

@interface CPLProxySession : CPLPlatformObject <CPLChangeSessionImplementation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)beginSessionForProxy:(id)arg0 knownVersion:(id)arg1 context:(id)arg2 completionHandler:(id)arg3 ;
-(id)proxyLibraryManager;
-(id)proxyWithErrorHandler:(id)arg0 ;
-(void)beginSessionWithKnownLibraryVersion:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)dispatchBlockWhenLibraryIsOpen:(id)arg0 ;
-(void)finalizeWithCompletionHandler:(id)arg0 ;
-(void)tearDownWithCompletionHandler:(id)arg0 ;


@end


#endif