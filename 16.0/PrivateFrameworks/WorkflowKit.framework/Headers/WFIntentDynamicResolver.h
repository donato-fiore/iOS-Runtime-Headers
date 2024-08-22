// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFINTENTDYNAMICRESOLVER_H
#define WFINTENTDYNAMICRESOLVER_H

@class NSMutableSet, INCExtensionConnection, NSString;
@protocol WFIntentDynamicResolverDataSource, INCExtensionProxy;

#import <Foundation/Foundation.h>


@interface WFIntentDynamicResolver : NSObject

@property (retain, nonatomic) NSMutableSet *activeRequests; // ivar: _activeRequests
@property (readonly, weak, nonatomic) NSObject<WFIntentDynamicResolverDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) INCExtensionConnection *extensionConnection; // ivar: _extensionConnection
@property (readonly, nonatomic) NSObject<INCExtensionProxy> *extensionProxy; // ivar: _extensionProxy
@property (readonly, copy, nonatomic) NSString *intentKeyPathToResolve; // ivar: _intentKeyPathToResolve
@property (readonly, nonatomic) NSUInteger state; // ivar: _state


-(id)initWithIntentKeyPathToResolve:(id)arg0 dataSource:(id)arg1 ;
-(id)intent;
-(id)resolveWithUserInput:(id)arg0 completionBlock:(id)arg1 ;
-(void)beginSessionWithCompletionBlock:(id)arg0 ;
-(void)endSession;
-(void)failWithError:(id)arg0 ;
-(void)populatedSkeletonIntentWithUserInput:(id)arg0 forKeyPath:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif