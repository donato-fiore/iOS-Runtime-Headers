// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3BITMASKPREDICATE_H
#define ML3BITMASKPREDICATE_H



#import "ML3PropertyPredicate.h"

@interface ML3BitMaskPredicate : ML3PropertyPredicate

@property (nonatomic) NSInteger mask; // ivar: _mask
@property (nonatomic) NSInteger value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)predicateWithProperty:(id)arg0 mask:(NSInteger)arg1 value:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)databaseStatementParameters;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProperty:(id)arg0 mask:(NSInteger)arg1 value:(NSInteger)arg2 ;
-(void)appendSQLToMutableString:(id)arg0 entityClass:(Class)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif