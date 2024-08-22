// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSSYSTEMPROFILE_H
#define DRSSYSTEMPROFILE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DRSSystemProfile : NSObject

@property (nonatomic) BOOL allowsCustomerAnalyticsOverride; // ivar: _allowsCustomerAnalyticsOverride
@property (readonly, nonatomic) NSString *build; // ivar: _build
@property (readonly, nonatomic) NSString *buildVariant;
@property (readonly, nonatomic) BOOL customerApprovesAnalytics;
@property (readonly, nonatomic) NSString *deviceCategory; // ivar: _deviceCategory
@property (readonly, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (readonly, nonatomic) BOOL isCarrier; // ivar: _isCarrier
@property (readonly, nonatomic) BOOL isInternal; // ivar: _isInternal
@property (readonly, nonatomic) BOOL isLogUploadEnabled;
@property (readonly, nonatomic) BOOL isSeed; // ivar: _isSeed
@property (readonly, nonatomic) BOOL isTaskingEnabled;
@property (nonatomic) BOOL overridingCustomerApprovesAnalyticsValue; // ivar: _overridingCustomerApprovesAnalyticsValue
@property (readonly, nonatomic) unsigned char platform; // ivar: _platform
@property (readonly, nonatomic) NSString *platformString;
@property (readonly, nonatomic) NSUInteger uploadSessionUploadCapBytes;


+(id)sharedInstance;
-(id)init;
-(void)_populateBuild;
-(void)_populateBuildVariant;
-(void)_populateCarrier;
-(void)_populateDeviceCategory;
-(void)_populateDeviceModel;
-(void)_populatePlatform;


@end


#endif