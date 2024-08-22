// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDUNPROTECTEDKEYVALUEENTITY_H
#define HDUNPROTECTEDKEYVALUEENTITY_H



#import "HDKeyValueEntity.h"

@interface HDUnprotectedKeyValueEntity : HDKeyValueEntity



+(BOOL)setBadge:(id)arg0 forDomain:(NSInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(char *)_insertStatementKey;
+(id)badgeForDomain:(NSInteger)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)databaseTable;


@end


#endif