// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMICLOUDSUBSCRIPTION_H
#define BMICLOUDSUBSCRIPTION_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMiCloudSubscription : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSInteger bundleQuotaInBytes; // ivar: _bundleQuotaInBytes
@property (readonly, nonatomic) NSInteger commerceQuotaInBytes; // ivar: _commerceQuotaInBytes
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int displayEntry; // ivar: _displayEntry
@property (nonatomic) BOOL hasBundleQuotaInBytes; // ivar: _hasBundleQuotaInBytes
@property (nonatomic) BOOL hasCommerceQuotaInBytes; // ivar: _hasCommerceQuotaInBytes
@property (nonatomic) BOOL hasMlServerScore; // ivar: _hasMlServerScore
@property (nonatomic) BOOL hasTotalAvailable; // ivar: _hasTotalAvailable
@property (nonatomic) BOOL hasTotalQuota; // ivar: _hasTotalQuota
@property (nonatomic) BOOL hasTotalUsed; // ivar: _hasTotalUsed
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int iCloudSubscriptionEventType; // ivar: _iCloudSubscriptionEventType
@property (readonly, nonatomic) CGFloat mlServerScore; // ivar: _mlServerScore
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger totalAvailable; // ivar: _totalAvailable
@property (readonly, nonatomic) NSInteger totalQuota; // ivar: _totalQuota
@property (readonly, nonatomic) NSInteger totalUsed; // ivar: _totalUsed


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithMlServerScore:(id)arg0 totalQuota:(id)arg1 totalUsed:(id)arg2 totalAvailable:(id)arg3 bundleQuotaInBytes:(id)arg4 commerceQuotaInBytes:(id)arg5 iCloudSubscriptionEventType:(int)arg6 ;
-(id)initWithMlServerScore:(id)arg0 totalQuota:(id)arg1 totalUsed:(id)arg2 totalAvailable:(id)arg3 bundleQuotaInBytes:(id)arg4 commerceQuotaInBytes:(id)arg5 iCloudSubscriptionEventType:(int)arg6 displayEntry:(int)arg7 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif