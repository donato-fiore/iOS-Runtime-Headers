// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFINSTANCEINFO_H
#define AFINSTANCEINFO_H

@class NSUUID, NSString;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFInstanceInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, nonatomic) NSInteger applicationType; // ivar: _applicationType
@property (readonly, copy, nonatomic) NSUUID *applicationUUID; // ivar: _applicationUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *instanceUUID; // ivar: _instanceUUID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithInstanceUUID:(id)arg0 applicationType:(NSInteger)arg1 applicationUUID:(id)arg2 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif