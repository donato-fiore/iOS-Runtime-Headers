// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSESSION_H
#define SHSESSION_H

@class NSString;
@protocol SHMatcherDelegate, SHSessionDriverDelegate, SHSessionDelegate, OS_dispatch_queue, SHMatcher, SHSessionDriver;

#import <Foundation/Foundation.h>

#import "SHCatalog.h"

@interface SHSession : NSObject <SHMatcherDelegate, SHSessionDriverDelegate>



@property (readonly, nonatomic) SHCatalog *catalog; // ivar: _catalog
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SHSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue; // ivar: _delegateCallbackQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SHMatcher> *matcher; // ivar: _matcher
@property (readonly, nonatomic) NSObject<SHSessionDriver> *sessionDriver; // ivar: _sessionDriver
@property (readonly) Class superclass;


-(BOOL)_isSessionDriverSignature:(id)arg0 ;
-(BOOL)validateSignature:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithCatalog:(id)arg0 ;
-(id)initWithCatalog:(id)arg0 matcher:(id)arg1 ;
-(id)matcherForCatalog:(id)arg0 ;
-(void)dealloc;
-(void)handleCommonActionsForResponse:(id)arg0 ;
-(void)matchSignature:(id)arg0 ;
-(void)matchStreamingBuffer:(id)arg0 atTime:(id)arg1 ;
-(void)matcher:(id)arg0 didProduceResponse:(id)arg1 ;


@end


#endif