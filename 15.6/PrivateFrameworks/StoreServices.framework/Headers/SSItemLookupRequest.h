// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSITEMLOOKUPREQUEST_H
#define SSITEMLOOKUPREQUEST_H

@class NSMutableDictionary, NSString, NSDictionary;
@protocol SSXPCCoding, SSItemLookupRequestDelegate;


#import "SSRequest.h"

@interface SSItemLookupRequest : SSRequest <SSXPCCoding>

 {
    NSMutableDictionary *_parameters;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SSItemLookupRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSDictionary *parameters;
@property (readonly) Class superclass;


-(BOOL)start;
-(id)_convertedValueForValue:(id)arg0 ;
-(id)_copyItemsFromResponse:(id)arg0 expirationDate:(id)arg1 ;
-(id)_errorForStatusCode:(NSInteger)arg0 ;
-(id)copyQueryStringParameters;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)valueForParameter:(id)arg0 ;
-(void)dealloc;
-(void)setValue:(id)arg0 forParameter:(id)arg1 ;
-(void)startWithCompletionBlock:(id)arg0 ;
-(void)startWithItemLookupBlock:(id)arg0 ;


@end


#endif