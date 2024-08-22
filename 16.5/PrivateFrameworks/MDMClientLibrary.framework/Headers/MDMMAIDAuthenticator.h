// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDMMAIDAUTHENTICATOR_H
#define MDMMAIDAUTHENTICATOR_H

@class NSString;
@protocol DMCHTTPAuthenticator;

#import <Foundation/Foundation.h>


@interface MDMMAIDAuthenticator : NSObject <DMCHTTPAuthenticator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *rmAccountID; // ivar: _rmAccountID
@property (readonly) Class superclass;


-(BOOL)authenticateRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)prepareTask:(id)arg0 error:(*id)arg1 ;
-(id)_appleIDContext;
-(id)initWithRMAccountID:(id)arg0 ;


@end


#endif