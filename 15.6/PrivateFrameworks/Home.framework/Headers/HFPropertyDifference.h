// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFPROPERTYDIFFERENCE_H
#define HFPROPERTYDIFFERENCE_H



#import "HFDifference.h"

@interface HFPropertyDifference : HFDifference

@property (retain, nonatomic) id *valueA; // ivar: _valueA
@property (retain, nonatomic) id *valueB; // ivar: _valueB


+(BOOL)object:(id)arg0 isEqualToObject:(id)arg1 ;
+(id)compareObjectA:(id)arg0 toObjectB:(id)arg1 key:(id)arg2 priority:(NSUInteger)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilder;
-(id)initWithObjectA:(id)arg0 toObjectB:(id)arg1 key:(id)arg2 priority:(NSUInteger)arg3 ;


@end


#endif