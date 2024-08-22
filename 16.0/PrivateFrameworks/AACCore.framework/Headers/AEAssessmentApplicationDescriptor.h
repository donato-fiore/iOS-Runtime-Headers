// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AEASSESSMENTAPPLICATIONDESCRIPTOR_H
#define AEASSESSMENTAPPLICATIONDESCRIPTOR_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AEAssessmentApplicationDescriptor : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) BOOL requiresSignatureValidation; // ivar: _requiresSignatureValidation
@property (readonly, copy, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 teamIdentifier:(id)arg1 requiresSignatureValidation:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif