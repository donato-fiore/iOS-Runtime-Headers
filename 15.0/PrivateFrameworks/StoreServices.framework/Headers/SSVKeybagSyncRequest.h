// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVKEYBAGSYNCREQUEST_H
#define SSVKEYBAGSYNCREQUEST_H

@class NSNumber, NSString;
@protocol SSXPCCoding;


#import "SSRequest.h"

@interface SSVKeybagSyncRequest : SSRequest <SSXPCCoding>



@property (readonly, nonatomic) NSNumber *accountIdentifier; // ivar: _accountID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithAccountIdentifier:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif