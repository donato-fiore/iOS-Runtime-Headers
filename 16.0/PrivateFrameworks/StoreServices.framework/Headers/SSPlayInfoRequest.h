// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSPLAYINFOREQUEST_H
#define SSPLAYINFOREQUEST_H

@class NSString;
@protocol SSXPCCoding, SSPlayInfoRequestDelegate;


#import "SSRequest.h"
#import "SSPlayInfoRequestContext.h"
#import "SSPlayInfoResponse.h"

@interface SSPlayInfoRequest : SSRequest <SSXPCCoding>

 {
    SSPlayInfoRequestContext *_context;
    SSPlayInfoResponse *_response;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SSPlayInfoRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) SSPlayInfoRequestContext *playInfoContext;
@property (readonly) SSPlayInfoResponse *playInfoResponse;
@property (readonly) Class superclass;


-(BOOL)start;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithPlayInfoContext:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;
-(void)startWithCompletionBlock:(id)arg0 ;
-(void)startWithPlayInfoResponseBlock:(id)arg0 ;


@end


#endif