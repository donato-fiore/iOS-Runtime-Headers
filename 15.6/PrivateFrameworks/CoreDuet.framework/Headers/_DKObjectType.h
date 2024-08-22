// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKOBJECTTYPE_H
#define _DKOBJECTTYPE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _DKObjectType : NSObject <NSSecureCoding, NSCopying>

 {
    NSInteger _typeCode;
    Class _objectClass;
}


@property (readonly, nonatomic) Class objectClass;
@property (readonly, nonatomic) NSInteger typeCode;


+(BOOL)supportsSecureCoding;
+(Class)associatedObjectClass;
+(NSInteger)typeCodeFromName:(id)arg0 ;
+(id)objectTypeFromClass:(Class)arg0 ;
+(id)objectTypeWithName:(id)arg0 ;
+(id)objectTypeWithTypeCode:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTypeCode:(NSInteger)arg0 objectClass:(Class)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif