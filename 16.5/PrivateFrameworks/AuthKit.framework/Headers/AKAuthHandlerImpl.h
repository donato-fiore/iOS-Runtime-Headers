// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKAUTHHANDLERIMPL_H
#define AKAUTHHANDLERIMPL_H

@class NSString;
@protocol AKAuthHandler;

#import <Foundation/Foundation.h>


@interface AKAuthHandlerImpl : NSObject <AKAuthHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceSilentAuth; // ivar: _forceSilentAuth
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)buildReauthenticationContextFromContext:(id)arg0 error:(*id)arg1 ;
-(void)reauthenticateWithContext:(id)arg0 completion:(id)arg1 ;
-(void)reauthenticateWithContext:(id)arg0 completionWithResults:(id)arg1 ;


@end


#endif