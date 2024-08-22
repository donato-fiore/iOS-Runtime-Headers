// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSCONTEXTUALCLIENTCONTEXTCONDITION_H
#define TPSCONTEXTUALCLIENTCONTEXTCONDITION_H

@class NSString;


#import "TPSSerializableObject.h"

@interface TPSContextualClientContextCondition : TPSSerializableObject

@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) id *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif