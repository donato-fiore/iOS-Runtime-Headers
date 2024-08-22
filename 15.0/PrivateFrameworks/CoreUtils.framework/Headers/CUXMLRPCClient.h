// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUXMLRPCCLIENT_H
#define CUXMLRPCCLIENT_H

@class NSMutableDictionary, NSURLSession, NSString;
@protocol NSURLSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUXMLRPCClient : NSObject <NSURLSessionDelegate>

 {
    NSMutableDictionary *_tasks;
    *LogCategory _ucat;
    NSURLSession *_urlSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (readonly) Class superclass;


-(id)init;
-(void)_activate;
-(void)_handleResponse:(id)arg0 data:(id)arg1 error:(id)arg2 identifier:(id)arg3 responseHandler:(id)arg4 ;
-(void)_invalidate;
-(void)_requestURL:(id)arg0 methodName:(id)arg1 params:(id)arg2 httpHeaders:(id)arg3 identifier:(id)arg4 responseHandler:(id)arg5 ;
-(void)activate;
-(void)dealloc;
-(void)invalidate;
-(void)requestURL:(id)arg0 methodName:(id)arg1 params:(id)arg2 httpHeaders:(id)arg3 identifier:(*id)arg4 responseHandler:(id)arg5 ;


@end


#endif