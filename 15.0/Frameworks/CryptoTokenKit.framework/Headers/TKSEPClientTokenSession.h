// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKSEPCLIENTTOKENSESSION_H
#define TKSEPCLIENTTOKENSESSION_H



#import "TKClientTokenSession.h"
#import "TKTokenID.h"

@interface TKSEPClientTokenSession : TKClientTokenSession

@property (readonly, nonatomic) TKTokenID *tokenID;


-(id)createObjectWithAttributes:(id)arg0 error:(*id)arg1 ;
-(id)initWithToken:(id)arg0 LAContext:(id)arg1 parameters:(id)arg2 error:(*id)arg3 ;
-(id)objectForObjectID:(id)arg0 error:(*id)arg1 ;


@end


#endif