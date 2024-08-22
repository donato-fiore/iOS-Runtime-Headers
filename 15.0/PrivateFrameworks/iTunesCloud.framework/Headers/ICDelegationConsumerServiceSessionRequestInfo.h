// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDELEGATIONCONSUMERSERVICESESSIONREQUESTINFO_H
#define ICDELEGATIONCONSUMERSERVICESESSIONREQUESTINFO_H


#import <Foundation/Foundation.h>


@interface ICDelegationConsumerServiceSessionRequestInfo : NSObject

@property (readonly, nonatomic) NSUInteger accountID; // ivar: _accountID
@property (readonly, nonatomic) NSUInteger fairPlaySessionID; // ivar: _fairPlaySessionID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithAccountID:(NSUInteger)arg0 fairPlaySessionID:(NSUInteger)arg1 ;


@end


#endif