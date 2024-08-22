// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSYSTEMSERVICEOPENAPPLICATIONREQUEST_H
#define FBSYSTEMSERVICEOPENAPPLICATIONREQUEST_H

@class NSString, FBSOpenApplicationOptions;

#import <Foundation/Foundation.h>

#import "FBProcess.h"

@interface FBSystemServiceOpenApplicationRequest : NSObject

@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) FBProcess *clientProcess; // ivar: _clientProcess
@property (copy, nonatomic) FBSOpenApplicationOptions *options; // ivar: _options
@property (nonatomic, getter=isTrusted) BOOL trusted; // ivar: _trusted


-(id)description;
-(id)initWithBundleId:(id)arg0 ;


@end


#endif