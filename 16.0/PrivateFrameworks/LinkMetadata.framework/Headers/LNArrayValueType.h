// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNARRAYVALUETYPE_H
#define LNARRAYVALUETYPE_H



#import "LNValueType.h"

@interface LNArrayValueType : LNValueType

@property (readonly, nonatomic) NSInteger capabilities; // ivar: _capabilities
@property (readonly, copy, nonatomic) LNValueType *memberValueType; // ivar: _memberValueType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)objectIsMemberOfType:(id)arg0 ;
-(Class)objectClass;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMemberValueType:(id)arg0 ;
-(id)initWithMemberValueType:(id)arg0 capabilities:(NSInteger)arg1 ;
-(id)metadataClassesForCoding;
-(id)objectClassesForCoding;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateValuesOfValueType:(id)arg0 value:(id)arg1 block:(id)arg2 ;


@end


#endif