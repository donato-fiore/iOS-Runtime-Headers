// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BAAPPEXTENSIONINFO_H
#define BAAPPEXTENSIONINFO_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BAAppExtensionInfo : NSObject <NSSecureCoding>



@property (readonly) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly) BOOL downloadSizeRestricted; // ivar: _downloadSizeRestricted
@property (readonly) NSDate *lastApplicationLaunchTime; // ivar: _lastApplicationLaunchTime
@property (readonly) NSDate *lastPeriodicCheckTime; // ivar: _lastPeriodicCheckTime


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif