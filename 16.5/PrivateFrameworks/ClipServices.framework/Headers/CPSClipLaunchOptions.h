// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSCLIPLAUNCHOPTIONS_H
#define CPSCLIPLAUNCHOPTIONS_H

@class NSNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPSClipLaunchOptions : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *locationConfirmationGranted; // ivar: _locationConfirmationGranted
@property (copy, nonatomic) NSString *predefinedBundleID; // ivar: _predefinedBundleID
@property (nonatomic) BOOL showsAppAttributionBanner; // ivar: _showsAppAttributionBanner
@property (nonatomic) BOOL skipsLaunching; // ivar: _skipsLaunching
@property (retain, nonatomic) NSNumber *userNotificationGranted; // ivar: _userNotificationGranted


+(BOOL)supportsSecureCoding;
+(id)optionsForAppClipRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif