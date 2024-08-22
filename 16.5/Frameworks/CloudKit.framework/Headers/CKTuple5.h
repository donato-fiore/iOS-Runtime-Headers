// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTUPLE5_H
#define CKTUPLE5_H



#import "CKTuple.h"

@interface CKTuple5 : CKTuple

@property (retain, nonatomic) id *v1; // ivar: _v1
@property (retain, nonatomic) id *v2; // ivar: _v2
@property (retain, nonatomic) id *v3; // ivar: _v3
@property (retain, nonatomic) id *v4; // ivar: _v4
@property (retain, nonatomic) id *v5; // ivar: _v5


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithObject1:(id)arg0 object2:(id)arg1 object3:(id)arg2 object4:(id)arg3 object5:(id)arg4 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;


@end


#endif