// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENREMOTEPRESENTATIONREQUEST_H
#define ENREMOTEPRESENTATIONREQUEST_H

@class NSString, NSDictionary, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ENRegion.h"

@interface ENRemotePresentationRequest : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) ENRegion *agencyRegion; // ivar: _agencyRegion
@property (copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (copy, nonatomic) NSDictionary *decisionInfo; // ivar: _decisionInfo
@property (copy, nonatomic) NSUUID *receiptId; // ivar: _receiptId
@property (readonly, copy, nonatomic) ENRegion *region;
@property (nonatomic) NSInteger requestType; // ivar: _requestType
@property (nonatomic) BOOL testMode; // ivar: _testMode


+(BOOL)supportsSecureCoding;
+(id)presentationRequestWithType:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)keyReleaseRequestCompletedWithDecision:(BOOL)arg0 ;
-(void)onboardingRequestCompletedWithDecision:(BOOL)arg0 ;
-(void)preApprovalRequestCompletedWithDecision:(BOOL)arg0 ;


@end


#endif