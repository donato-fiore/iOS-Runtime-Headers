// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMRAPPLAUNCHINFO_H
#define NMRAPPLAUNCHINFO_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface NMRAppLaunchInfo : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID


-(id)initWithBundleID:(id)arg0 URL:(id)arg1 ;


@end


#endif