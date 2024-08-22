// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICMUSICSUBSCRIPTIONLEASEIDENTITYCACHEKEY_H
#define _ICMUSICSUBSCRIPTIONLEASEIDENTITYCACHEKEY_H

@class NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _ICMusicSubscriptionLeaseIdentityCacheKey : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSNumber *DSID; // ivar: _DSID
@property (readonly, copy, nonatomic) NSString *carrierBundleDeviceIdentifier; // ivar: _carrierBundleDeviceIdentifier
@property (readonly, copy, nonatomic) NSNumber *delegatedDSID; // ivar: _delegatedDSID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDSID:(id)arg0 carrierBundleDeviceIdentifier:(id)arg1 delegatedDSID:(id)arg2 ;


@end


#endif