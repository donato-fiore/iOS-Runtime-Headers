// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSMPFULLACCOUNTIDENTITY_H
#define IDSMPFULLACCOUNTIDENTITY_H

@class NSData;


#import "IDSMPIdentity.h"

@interface IDSMPFullAccountIdentity : IDSMPIdentity

@property (readonly, nonatomic) NSData *publicName;


+(id)fullAccountIdentityWithError:(*id)arg0 ;
+(id)identityWithData:(id)arg0 error:(*id)arg1 ;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)publicAccountIdentityWithError:(*id)arg0 ;
-(id)rolledAccountIdenityWithError:(*id)arg0 ;
-(id)signData:(id)arg0 withError:(*id)arg1 ;


@end


#endif