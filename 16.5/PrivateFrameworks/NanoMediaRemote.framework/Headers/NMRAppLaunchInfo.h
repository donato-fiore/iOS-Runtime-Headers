// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMRAPPLAUNCHINFO_H
#define NMRAPPLAUNCHINFO_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface NMRAppLaunchInfo : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID


-(id)initWithPlayerResponse:(id)arg0 ;


@end


#endif