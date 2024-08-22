// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCSELEMENTMAPPING_H
#define GCSELEMENTMAPPING_H

@class NSString;
@protocol NSSecureCoding, GCSJSONSerializable, GCSJSONObject;

#import <Foundation/Foundation.h>


@interface GCSElementMapping : NSObject <NSSecureCoding, GCSJSONSerializable>



@property (readonly, nonatomic, getter=isCustomized) BOOL customized;
@property (copy, nonatomic) NSString *elementKey; // ivar: _elementKey
@property (readonly, nonatomic) NSString *id;
@property (readonly, nonatomic) NSObject<GCSJSONObject> *jsonObject;
@property (copy, nonatomic) NSString *mappingKey; // ivar: _mappingKey
@property (nonatomic) int remappingOrder; // ivar: _remappingOrder


+(BOOL)supportsSecureCoding;
+(id)archivalClasses;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithElementKey:(id)arg0 mappingKey:(id)arg1 remappingOrder:(int)arg2 ;
-(id)initWithJSONObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif