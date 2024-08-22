// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3SETVALUESFORPROPERTIESOPERATION_H
#define ML3SETVALUESFORPROPERTIESOPERATION_H



#import "ML3DatabaseOperation.h"

@interface ML3SetValuesForPropertiesOperation : ML3DatabaseOperation



-(BOOL)_execute:(*id)arg0 ;
-(BOOL)_setValues:(id)arg0 forProperties:(id)arg1 withEntityClass:(Class)arg2 usingPersistentID:(NSInteger)arg3 connection:(id)arg4 error:(*id)arg5 ;
-(NSUInteger)type;


@end


#endif