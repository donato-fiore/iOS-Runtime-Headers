// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMMUTABLEACCOUNT_H
#define VMMUTABLEACCOUNT_H

@class NSUUID, NSString;


#import "VMAccount.h"
#import "VMHandle.h"

@interface VMMutableAccount : VMAccount

@property (retain, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *abbreviatedAccountDescription;
@property (copy, nonatomic) NSString *accountDescription;
@property (retain, nonatomic) VMHandle *handle;
@property (copy, nonatomic) NSString *isoCountryCode;
@property (nonatomic, getter=isProvisioned) BOOL provisioned;
@property (copy, nonatomic) NSString *serviceName;




@end


#endif