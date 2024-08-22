// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCONCRETEVALUE_H
#define NSCONCRETEVALUE_H



#import "NSValue.h"

@interface NSConcreteValue : NSValue {
    NSUInteger _specialFlags;
    *void typeInfo;
}




+(BOOL)supportsSecureCoding;
+(void)initialize;
-(*void)_value;
-(BOOL)_matchType:(char *)arg0 size:(NSUInteger)arg1 strict:(BOOL)arg2 ;
-(BOOL)isEqualToValue:(id)arg0 ;
-(NSUInteger)hash;
-(char *)objCType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getValue:(*void)arg0 ;
-(void)getValue:(*void)arg0 size:(NSUInteger)arg1 ;


@end


#endif