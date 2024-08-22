// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDLAUNCHABLEAPPSRESPONSE_H
#define ASDLAUNCHABLEAPPSRESPONSE_H

@class NSArray;


#import "ASDRequestResponse.h"

@interface ASDLaunchableAppsResponse : ASDRequestResponse

@property (readonly, nonatomic) NSArray *bundleIDs; // ivar: _bundleIDs
@property BOOL success;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBundleIDs:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif