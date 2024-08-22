// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FAFETCHFAMILYPHOTOREQUEST_H
#define FAFETCHFAMILYPHOTOREQUEST_H

@class NSString, NSNumber;


#import "FAFamilyCircleRequest.h"

@interface FAFetchFamilyPhotoRequest : FAFamilyCircleRequest

@property NSInteger backgroundType; // ivar: _backgroundType
@property (copy) NSString *emailAddress; // ivar: _emailAddress
@property (copy) NSString *fullname; // ivar: _fullname
@property (readonly) BOOL localFallback; // ivar: _localFallback
@property (readonly, copy) NSNumber *memberDSID; // ivar: _memberDSID
@property (readonly, copy) NSString *memberHashedDSID; // ivar: _memberHashedDSID
@property CGFloat monogramDiameter; // ivar: _monogramDiameter
@property (copy) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly) NSUInteger requestedSize; // ivar: _requestedSize
@property CGFloat requiredHeight; // ivar: _requiredHeight
@property CGFloat requiredWidth; // ivar: _requiredWidth
@property BOOL useMonogramAsLastResort; // ivar: _useMonogramAsLastResort


-(id)init;
-(id)initWithConnectionProvider:(id)arg0 ;
-(id)initWithFamilyMemberDSID:(id)arg0 size:(NSUInteger)arg1 localFallback:(BOOL)arg2 ;
-(id)initWithFamilyMemberDSID:(id)arg0 size:(NSUInteger)arg1 localFallback:(BOOL)arg2 connectionProvider:(id)arg3 ;
-(id)initWithFamilyMemberHashedDSID:(id)arg0 size:(NSUInteger)arg1 localFallback:(BOOL)arg2 ;
-(id)initWithFamilyMemberHashedDSID:(id)arg0 size:(NSUInteger)arg1 localFallback:(BOOL)arg2 connectionProvider:(id)arg3 ;
-(id)requestOptions;
-(void)startRequestWithCompletionHandler:(id)arg0 ;


@end


#endif