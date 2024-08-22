// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASTPROFILERESULT_H
#define ASTPROFILERESULT_H

@class NSArray;


#import "ASTSealablePayload.h"
#import "ASTIdentity.h"

@interface ASTProfileResult : ASTSealablePayload

@property (readonly, nonatomic) ASTIdentity *identity; // ivar: _identity
@property (retain, nonatomic) NSArray *properties; // ivar: _properties
@property (retain, nonatomic) NSArray *tests; // ivar: _tests


+(id)resultWithIdentity:(id)arg0 ;
+(id)sealedProfileResultWithPayload:(id)arg0 signature:(id)arg1 ;
-(id)generatePayload;
-(id)init;
-(id)initWithIdentity:(id)arg0 ;


@end


#endif