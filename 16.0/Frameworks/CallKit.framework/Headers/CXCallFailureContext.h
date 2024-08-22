// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXCALLFAILURECONTEXT_H
#define CXCALLFAILURECONTEXT_H

@class NSString;
@protocol CXCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CXCallFailureContext : NSObject <CXCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger failureReason; // ivar: _failureReason
@property (nonatomic) BOOL hasCellularSettingsRemediation; // ivar: _hasCellularSettingsRemediation
@property (nonatomic) BOOL hasDateAndTimeSettingsRemediation; // ivar: _hasDateAndTimeSettingsRemediation
@property (nonatomic) BOOL hasLocationSettingsRemediation; // ivar: _hasLocationSettingsRemediation
@property (nonatomic) BOOL hasWiFiSettingsRemediation; // ivar: _hasWiFiSettingsRemediation
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) NSInteger providerEndedReason; // ivar: _providerEndedReason
@property (nonatomic) NSInteger providerErrorCode; // ivar: _providerErrorCode
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sanitizedCopy;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif