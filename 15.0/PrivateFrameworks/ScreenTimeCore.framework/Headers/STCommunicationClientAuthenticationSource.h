// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STCOMMUNICATIONCLIENTAUTHENTICATIONSOURCE_H
#define STCOMMUNICATIONCLIENTAUTHENTICATIONSOURCE_H

@class NSString;
@protocol STAuthenticationSource, STAuthenticationSession;

#import <Foundation/Foundation.h>


@interface STCommunicationClientAuthenticationSource : NSObject <STAuthenticationSource>



@property (retain, nonatomic) NSObject<STAuthenticationSession> *authenticationSession; // ivar: _authenticationSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAuthenticationSession:(id)arg0 ;
-(void)authenticateWithIdentifier:(id)arg0 forced:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif