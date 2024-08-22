// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICQLINK_H
#define ICQLINK_H

@class NSDictionary, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface ICQLink : NSObject

@property (readonly, nonatomic) NSInteger action; // ivar: _action
@property (readonly, nonatomic) NSInteger options; // ivar: _options
@property (readonly, copy, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (retain, nonatomic) NSURL *remoteUIURL; // ivar: _remoteUIURL
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)performAction:(NSInteger)arg0 parameters:(id)arg1 options:(NSInteger)arg2 ;
+(id)linkWithText:(id)arg0 action:(NSInteger)arg1 parameters:(id)arg2 ;
+(id)linkWithText:(id)arg0 options:(NSInteger)arg1 action:(NSInteger)arg2 parameters:(id)arg3 ;
+(id)urlRequestWithParams:(id)arg0 options:(NSInteger)arg1 ;
+(id)urlSession;
+(void)addHeadersToRequest:(id)arg0 ;
+(void)addPOSTParams:(id)arg0 toRequest:(id)arg1 ;
+(void)performHTTPGETCallWithParams:(id)arg0 options:(NSInteger)arg1 ;
+(void)performHTTPPOSTCallWithParams:(id)arg0 options:(NSInteger)arg1 ;
+(void)startDataTaskWithRequest:(id)arg0 ;
-(BOOL)performAction;
-(BOOL)performActionWithOptions:(NSInteger)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithText:(id)arg0 action:(NSInteger)arg1 parameters:(id)arg2 ;
-(id)initWithText:(id)arg0 options:(NSInteger)arg1 action:(NSInteger)arg2 parameters:(id)arg3 ;


@end


#endif