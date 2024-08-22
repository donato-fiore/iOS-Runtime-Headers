// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTUPLE2_H
#define CKTUPLE2_H



#import "CKTuple.h"

@interface CKTuple2 : CKTuple

@property (retain, nonatomic) id *v1; // ivar: _v1
@property (retain, nonatomic) id *v2; // ivar: _v2


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithObject1:(id)arg0 object2:(id)arg1 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;


@end


#endif