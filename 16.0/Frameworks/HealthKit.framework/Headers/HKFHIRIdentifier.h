// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFHIRIDENTIFIER_H
#define HKFHIRIDENTIFIER_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKFHIRIdentifier : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *resourceType; // ivar: _resourceType
@property (readonly, copy, nonatomic) NSString *stringValue;


+(BOOL)supportsSecureCoding;
+(id)FHIRIdentifierWithString:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)identifierForContainedResourceWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResourceType:(id)arg0 identifier:(id)arg1 ;
-(id)parentResourceIdentifierWithError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif