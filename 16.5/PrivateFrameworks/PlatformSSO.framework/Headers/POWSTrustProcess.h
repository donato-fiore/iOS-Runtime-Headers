// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWSTRUSTPROCESS_H
#define POWSTRUSTPROCESS_H


#import <Foundation/Foundation.h>


@interface POWSTrustProcess : NSObject

@property (nonatomic) BOOL parseWSTrust13; // ivar: _parseWSTrust13
@property (nonatomic) BOOL parseWSTrust2005; // ivar: _parseWSTrust2005


-(id)createWSTrust13Request:(id)arg0 ;
-(id)createWSTrust13Response:(id)arg0 ;
-(id)createWSTrust2005Request:(id)arg0 ;
-(id)createWSTrust2005Response:(id)arg0 ;
-(id)createWSTrustFault:(id)arg0 ;
-(id)init;
-(id)parseMexResponse:(id)arg0 namespaces:(id)arg1 policyXPath:(id)arg2 action:(id)arg3 ;
-(id)parseWSTrustMexResponse:(id)arg0 version:(NSUInteger)arg1 ;
-(id)parseWSTrustRequest:(id)arg0 version:(NSUInteger)arg1 ;
-(id)parseWSTrustResponse:(id)arg0 version:(NSUInteger)arg1 ;


@end


#endif