// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMRESULTRELAY_H
#define MCMRESULTRELAY_H

@protocol OS_xpc_object;


#import "MCMResultBase.h"

@interface MCMResultRelay : MCMResultBase

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcReplyFromRelay; // ivar: _xpcReplyFromRelay


-(BOOL)encodeResultOntoReply:(id)arg0 ;
-(id)initWithXPCReplyFromRelay:(id)arg0 ;


@end


#endif