// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RLMDYNAMICOBJECT_H
#define RLMDYNAMICOBJECT_H



#import "RLMObject.h"

@interface RLMDynamicObject : RLMObject



+(BOOL)shouldIncludeInDefaultSchema;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif