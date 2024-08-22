// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSKEYVALUESTORETRANSACTION_H
#define SSKEYVALUESTORETRANSACTION_H



#import "SSKeyValueStoreSession.h"

@interface SSKeyValueStoreTransaction : SSKeyValueStoreSession



-(BOOL)setData:(id)arg0 forDomain:(id)arg1 key:(id)arg2 ;
-(BOOL)setValue:(id)arg0 forDomain:(id)arg1 key:(id)arg2 ;
-(void)removeAccountFromDomain:(id)arg0 ;


@end


#endif