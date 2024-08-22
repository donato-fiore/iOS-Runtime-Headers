// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKOVERLAYABLEWEBSERVICEREQUEST_H
#define PKOVERLAYABLEWEBSERVICEREQUEST_H

@class NSMutableDictionary, NSArray, NSDictionary;
@protocol NSSecureCoding;


#import "PKWebServiceRequest.h"
#import "PKZeroingDataContainer.h"

@interface PKOverlayableWebServiceRequest : PKWebServiceRequest <NSSecureCoding>

 {
    NSMutableDictionary *_overlayParameters;
    NSMutableDictionary *_secureOverlayParameters;
    NSArray *_overridenKeys;
}


@property (readonly, nonatomic) PKZeroingDataContainer *archivedData;
@property (copy, nonatomic) NSDictionary *overlayParameters;
@property (nonatomic) BOOL requiresConfigurationForRedirect; // ivar: _requiresConfigurationForRedirect
@property (nonatomic) BOOL requiresConfigurationForRetry; // ivar: _requiresConfigurationForRetry
@property (copy, nonatomic) NSDictionary *secureOverlayParameters;


+(BOOL)supportsSecureCoding;
-(BOOL)hasOverlayParameters;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)overlayValueForKey:(id)arg0 ;
-(id)secureOverlayValueForKey:(id)arg0 ;
-(void)_applyOverlayToDictionary:(id)arg0 ;
-(void)_applySecureOverlayToDictionary:(id)arg0 ;
-(void)_setOverriddenKeys:(id)arg0 ;
-(void)_updateRequestForRedirect:(id)arg0 overrides:(id)arg1 webService:(id)arg2 withCompletion:(id)arg3 ;
-(void)_updateRequestForRetry:(id)arg0 retryFields:(id)arg1 webService:(id)arg2 withCompletion:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setOverlayValue:(id)arg0 forKey:(id)arg1 ;
-(void)setSecureOverlayValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif