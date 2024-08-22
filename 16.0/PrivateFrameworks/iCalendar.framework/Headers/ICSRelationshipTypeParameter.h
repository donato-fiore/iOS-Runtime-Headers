// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSRELATIONSHIPTYPEPARAMETER_H
#define ICSRELATIONSHIPTYPEPARAMETER_H



#import "ICSPredefinedValue.h"

@interface ICSRelationshipTypeParameter : ICSPredefinedValue



+(id)relationshipParameterFromCode:(NSUInteger)arg0 ;
+(id)relationshipTypeParameterFromICSString:(id)arg0 ;
-(Class)classForCoder;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;


@end


#endif