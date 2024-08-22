// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMUTABLECLIENTINFO_H
#define ICMUTABLECLIENTINFO_H

@class NSString;


#import "ICClientInfo.h"

@interface ICMutableClientInfo : ICClientInfo

@property (copy, nonatomic) NSString *bagProfile;
@property (copy, nonatomic) NSString *bagProfileVersion;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *clientVersion;
@property (copy, nonatomic) NSString *processName;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif