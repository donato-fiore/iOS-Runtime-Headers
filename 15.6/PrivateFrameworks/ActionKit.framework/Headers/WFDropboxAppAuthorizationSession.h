// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDROPBOXAPPAUTHORIZATIONSESSION_H
#define WFDROPBOXAPPAUTHORIZATIONSESSION_H

@class NSArray, NSURL, NSString;
@protocol WFOAuth2AuthorizationSession;

#import <Foundation/Foundation.h>


@interface WFDropboxAppAuthorizationSession : NSObject <WFOAuth2AuthorizationSession>



@property (readonly, nonatomic) NSArray *authorizationURLs; // ivar: _authorizationURLs
@property (readonly, nonatomic) NSURL *cancelURI; // ivar: _cancelURI
@property (readonly, nonatomic) NSString *clientID; // ivar: _clientID
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *state; // ivar: _state
@property (readonly, nonatomic) NSURL *successURI; // ivar: _successURI
@property (readonly) Class superclass;


-(BOOL)resumeSessionWithURL:(id)arg0 ;
-(id)initWithClientID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif