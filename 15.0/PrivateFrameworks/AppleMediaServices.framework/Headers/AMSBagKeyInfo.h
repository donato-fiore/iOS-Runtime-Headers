// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSBAGKEYINFO_H
#define AMSBAGKEYINFO_H

@class NSString;
@protocol NSSecureCoding, NSObject;

#import <Foundation/Foundation.h>


@interface AMSBagKeyInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *bagKey; // ivar: _bagKey
@property (readonly, nonatomic) NSObject<NSObject> *defaultValue; // ivar: _defaultValue
@property (readonly, nonatomic) NSUInteger valueType; // ivar: _valueType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithBagKey:(id)arg0 valueType:(NSUInteger)arg1 ;
-(id)initWithBagKey:(id)arg0 valueType:(NSUInteger)arg1 defaultValue:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif