// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMACCESSCODECONSTRAINTS_H
#define HMACCESSCODECONSTRAINTS_H

@class NSArray, NSString;
@protocol HMFObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMAccessCodeConstraints : NSObject <HMFObject, NSCopying, NSSecureCoding>



@property (readonly) NSUInteger allowedCharacterSets; // ivar: _allowedCharacterSets
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger maximumAllowedAccessCodes; // ivar: _maximumAllowedAccessCodes
@property (readonly) NSInteger maximumLength; // ivar: _maximumLength
@property (readonly) NSInteger minimumLength; // ivar: _minimumLength
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAllowedCharacterSets:(NSUInteger)arg0 minimumLength:(NSInteger)arg1 maximumLength:(NSInteger)arg2 maximumAllowedAccessCodes:(NSInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif