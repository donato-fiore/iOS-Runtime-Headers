// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STTELEPHONYCARRIERBUNDLEINFO_H
#define STTELEPHONYCARRIERBUNDLEINFO_H

@class NSString, NSArray;
@protocol NSCopying, NSMutableCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface STTelephonyCarrierBundleInfo : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>



@property (readonly, nonatomic) BOOL LTEConnectionShows4G; // ivar: _LTEConnectionShows4G
@property (readonly, copy, nonatomic) NSString *carrierName; // ivar: _carrierName
@property (readonly, copy, nonatomic) NSString *customerServicePhoneNumber; // ivar: _customerServicePhoneNumber
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *disabledApplicationIDs; // ivar: _disabledApplicationIDs
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *homeCountryCode; // ivar: _homeCountryCode
@property (readonly, nonatomic, getter=isReinitiatingActivationDisabled) BOOL reinitiatingActivationDisabled; // ivar: _reinitiatingActivationDisabled
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCarrierBundleInfo:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif