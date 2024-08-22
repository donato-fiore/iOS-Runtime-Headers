// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LARIGHT_H
#define LARIGHT_H

@class NSString;
@protocol LARightContextHandlerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "LAAccessKey.h"
#import "LARightContextHandler.h"

@interface LARight : NSObject <LARightContextHandlerDelegate>

 {
    NSString *_identifier;
    LAAccessKey *_accessKey;
    LARightContextHandler *_contextHandler;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUInteger _instanceID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tag; // ivar: _tag


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)accessKey;
-(id)context;
-(id)identifier;
-(id)init;
-(id)initWithAccessKey:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 accessKey:(id)arg1 ;
-(id)initWithRequirement:(id)arg0 ;
-(void)authorizeWithLocalizedReason:(id)arg0 completion:(id)arg1 ;
-(void)authorizeWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)checkCanAuthorizeWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)deauthorizeWithCompletion:(id)arg0 ;
-(void)rightContextDidBecomeInvalid;
-(void)setContext:(id)arg0 ;


@end


#endif