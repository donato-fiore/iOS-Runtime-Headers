// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FAPROPERTYELIGIBILITYREQUIREMENTS_H
#define FAPROPERTYELIGIBILITYREQUIREMENTS_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FAPropertyEligibilityRequirements : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *activeBundleIDs; // ivar: _activeBundleIDs
@property (readonly, copy, nonatomic) NSString *expectedMediaAltDSID; // ivar: _expectedMediaAltDSID
@property (readonly, nonatomic) BOOL hasRecommendedMembers; // ivar: _hasRecommendedMembers
@property (readonly, copy, nonatomic) NSString *propertyName; // ivar: _propertyName
@property (readonly, nonatomic) BOOL serverEligibility; // ivar: _serverEligibility
@property (readonly, nonatomic) id *serverPayload; // ivar: _serverPayload


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertyName:(id)arg0 dictionaryRepresentation:(id)arg1 ;
-(id)initWithPropertyName:(id)arg0 hasRecommendedMembers:(BOOL)arg1 expectedMediaAltDSID:(id)arg2 serverEligibility:(BOOL)arg3 activeBundleIDs:(id)arg4 serverPayload:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif