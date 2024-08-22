// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKAUTHORIZATIONPRESENTATIONREQUEST_H
#define HKAUTHORIZATIONPRESENTATIONREQUEST_H

@class NSString, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKAuthorizationPresentationRequest : NSObject <NSSecureCoding>



@property (nonatomic, getter=shouldDismissWhenBackgrounded) BOOL dismissWhenBackgrounded; // ivar: _dismissWhenBackgrounded
@property (copy, nonatomic) NSString *readUsageDescription; // ivar: _readUsageDescription
@property (copy, nonatomic) NSString *researchStudyUsageDescription; // ivar: _researchStudyUsageDescription
@property (copy, nonatomic) NSString *shareUsageDescription; // ivar: _shareUsageDescription
@property (nonatomic) NSInteger type; // ivar: _type
@property (copy, nonatomic) NSSet *typesRequiringReadAuthorization; // ivar: _typesRequiringReadAuthorization
@property (copy, nonatomic) NSSet *typesRequiringShareAuthorization; // ivar: _typesRequiringShareAuthorization


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif