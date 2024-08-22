// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKARGONKEYDESCRIPTOR_H
#define NTKARGONKEYDESCRIPTOR_H

@class NSDictionary, NSString;
@protocol NSSecureCoding, NSCopying, NTKArgonJSONEncodable;

#import <Foundation/Foundation.h>


@interface NTKArgonKeyDescriptor : NSObject <NSSecureCoding, NSCopying, NTKArgonJSONEncodable>



@property (readonly, nonatomic) NSDictionary *argon_JSONRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *fileName; // ivar: _fileName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)keyDescriptorFromBundle:(id)arg0 ;
+(id)unfilteredKeyDescriptorFromBundle:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)argon_initWithJSONRepresentation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 fileName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif