// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPROPERTYMAPPING_H
#define NSPROPERTYMAPPING_H

@class NSArray, NSString, NSExpression, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NSPropertyMapping : NSObject <NSSecureCoding, NSCopying>

 {
    *void _reserved;
    NSArray *_transformValidations;
    NSArray *_propertyTransforms;
    NSString *_name;
    NSExpression *_valueExpression;
    NSDictionary *_userInfo;
    __propertyMappingFlags _propertyMappingFlags;
}


@property (copy) NSString *name;
@property (retain) NSDictionary *userInfo;
@property (retain) NSExpression *valueExpression;


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithDestinationName:(id)arg0 valueExpression:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 valueExpression:(id)arg1 ;
-(void)_throwIfNotEditable;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif