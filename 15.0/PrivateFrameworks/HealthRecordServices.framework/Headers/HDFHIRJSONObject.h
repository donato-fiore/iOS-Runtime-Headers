// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDFHIRJSONOBJECT_H
#define HDFHIRJSONOBJECT_H

@class HKFHIRVersion, NSDictionary, NSData, NSString, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HDFHIRJSONObject : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) HKFHIRVersion *FHIRVersion; // ivar: _FHIRVersion
@property (readonly, copy, nonatomic) NSDictionary *JSONObject; // ivar: _JSONObject
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *detectedResourceType;
@property (readonly, copy, nonatomic) NSString *sourceString;
@property (readonly, copy, nonatomic) NSURL *sourceURL; // ivar: _sourceURL


+(BOOL)supportsSecureCoding;
+(id)_dataFromJSONObject:(id)arg0 JSONOptions:(NSUInteger)arg1 ;
+(id)objectWithResourceData:(id)arg0 error:(*id)arg1 ;
+(id)resourceTypeOfJSONObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dataWithJSONOptions:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObject:(id)arg0 sourceURL:(id)arg1 FHIRVersion:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif