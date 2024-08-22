// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSASSERTIONDESCRIPTOR_H
#define BLSASSERTIONDESCRIPTOR_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding, BSXPCCoding;

#import <Foundation/Foundation.h>


@interface BLSAssertionDescriptor : NSObject <NSCopying, NSSecureCoding, BSXPCCoding>



@property (readonly, copy, nonatomic) NSArray *attributes; // ivar: _attributes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *explanation; // ivar: _explanation
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)checkEntitlementSourceForRequiredEntitlements:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeOfClass:(Class)arg0 ;
-(id)attributesOfClasses:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExplanation:(id)arg0 attributes:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif