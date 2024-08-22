// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTYPE_H
#define WFTYPE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFType : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *typeDescription;


+(BOOL)supportsSecureCoding;
-(BOOL)conformsToClass:(Class)arg0 ;
-(BOOL)conformsToString:(id)arg0 ;
-(BOOL)conformsToType:(id)arg0 ;
-(BOOL)conformsToTypes:(id)arg0 ;
-(BOOL)conformsToUTType:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToClass:(Class)arg0 ;
-(BOOL)isEqualToType:(id)arg0 ;
-(BOOL)isEqualToUTType:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif