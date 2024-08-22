// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGCONTACTENTITY_H
#define SGCONTACTENTITY_H



#import "SGEntity.h"

@interface SGContactEntity : SGEntity



+(id)contactEntityFromEntity:(id)arg0 ;
+(id)contactEntityWithTitle:(id)arg0 duplicateKey:(id)arg1 recordId:(id)arg2 masterEntityId:(NSInteger)arg3 ;
-(id)initWithDuplicateKey:(id)arg0 recordId:(id)arg1 masterEntityId:(NSInteger)arg2 title:(id)arg3 ;


@end


#endif