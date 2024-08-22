// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDLAUNCHABLEAPPSREQUESTOPTIONS_H
#define ASDLAUNCHABLEAPPSREQUESTOPTIONS_H

@class NSArray;


#import "ASDRequestOptions.h"

@interface ASDLaunchableAppsRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) NSArray *bundleIDs; // ivar: _bundleIDs


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBundleIDs:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif