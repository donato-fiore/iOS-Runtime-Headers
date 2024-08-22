// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTRELLOACCESSRESOURCE_H
#define WFTRELLOACCESSRESOURCE_H

@class NSArray;


#import "WFAccountAccessResource.h"
#import "WFWebAuthenticationSessionPresentationContext.h"

@interface WFTrelloAccessResource : WFAccountAccessResource

@property (readonly, copy, nonatomic) NSArray *accounts;
@property (retain, nonatomic) WFWebAuthenticationSessionPresentationContext *presentationContext; // ivar: _presentationContext


-(Class)accountClass;
-(id)associatedAppIdentifier;
-(id)authorizationURLWithCallbackURL:(id)arg0 ;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif