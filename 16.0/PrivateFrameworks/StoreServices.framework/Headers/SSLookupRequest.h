// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSLOOKUPREQUEST_H
#define SSLOOKUPREQUEST_H

@class NSString;
@protocol SSXPCCoding;


#import "SSRequest.h"
#import "SSLookupProperties.h"
#import "SSAuthenticationContext.h"

@interface SSLookupRequest : SSRequest <SSXPCCoding>

 {
    SSLookupProperties *_properties;
}


@property (readonly, copy, nonatomic) SSLookupProperties *_lookupProperties;
@property (nonatomic) BOOL authenticatesIfNeeded;
@property (copy, nonatomic) SSAuthenticationContext *authenticationContext; // ivar: _authenticationContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *keyProfile;
@property (nonatomic) NSInteger localizationStyle;
@property (nonatomic) NSInteger personalizationStyle; // ivar: _personalizationStyle
@property (nonatomic) NSInteger resultFilters; // ivar: _resultFilters
@property (readonly) Class superclass;


-(BOOL)start;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithLocation:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)valueForRequestParameter:(id)arg0 ;
-(void)_setTimeoutInterval:(id)arg0 ;
-(void)dealloc;
-(void)setValue:(id)arg0 forRequestParameter:(id)arg1 ;
-(void)startWithCompletionBlock:(id)arg0 ;
-(void)startWithLookupBlock:(id)arg0 ;


@end


#endif