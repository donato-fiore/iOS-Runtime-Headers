// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKENCRYPTEDRECORDVALUESTORE_H
#define CKENCRYPTEDRECORDVALUESTORE_H



#import "CKRecordValueStore.h"

@interface CKEncryptedRecordValueStore : CKRecordValueStore



-(BOOL)isEncrypted;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)_setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setCompatibilityModeObjectNoValidate:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif