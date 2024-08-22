// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHSESSION_H
#define SHSESSION_H

@class NSString;
@protocol SHMatcherDelegate, SHSessionDriverDelegate, SHSessionDelegate, SHMatcher;

#import <Foundation/Foundation.h>

#import "SHCatalog.h"
#import "SHStreamingSessionDriver.h"

@interface SHSession : NSObject <SHMatcherDelegate, SHSessionDriverDelegate>



@property (readonly, nonatomic) SHCatalog *catalog; // ivar: _catalog
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SHSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SHMatcher> *matcher; // ivar: _matcher
@property (readonly, nonatomic) SHStreamingSessionDriver *sessionDriver; // ivar: _sessionDriver
@property (readonly) Class superclass;


-(BOOL)_isSessionDriverSignature:(id)arg0 ;
-(id)init;
-(id)initWithCatalog:(id)arg0 ;
-(id)initWithCatalog:(id)arg0 matcher:(id)arg1 ;
-(id)matcherForCatalog:(id)arg0 ;
-(void)matchSignature:(id)arg0 ;
-(void)matchStreamingBuffer:(id)arg0 atTime:(id)arg1 ;
-(void)matcher:(id)arg0 didFail:(id)arg1 ;
-(void)matcher:(id)arg0 didFindMatch:(id)arg1 ;
-(void)matcher:(id)arg0 didFinishWithOutcome:(NSInteger)arg1 ;
-(void)matcher:(id)arg0 didNotFindMatch:(id)arg1 ;


@end


#endif