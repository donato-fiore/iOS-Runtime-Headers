// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSOFTWARELIBRARYLOOKUPREQUEST_H
#define HUSOFTWARELIBRARYLOOKUPREQUEST_H

@class HMAccessory, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HUSoftwareLibraryLookupRequest : NSObject <NSCopying>



@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *storeID; // ivar: _storeID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessory:(id)arg0 ;
-(id)initWithBundleID:(id)arg0 storeID:(id)arg1 ;


@end


#endif