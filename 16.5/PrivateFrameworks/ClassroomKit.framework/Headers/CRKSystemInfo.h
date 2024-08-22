// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKSYSTEMINFO_H
#define CRKSYSTEMINFO_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface CRKSystemInfo : NSObject

@property (readonly, copy, nonatomic) NSDate *bootDate;
@property (copy, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (readonly, nonatomic) BOOL cloudConfigEnablesEphemeralMultiUser;
@property (readonly, nonatomic, getter=isEphemeralMultiUser) BOOL ephemeralMultiUser;
@property (readonly, nonatomic) NSUInteger platform;
@property (copy, nonatomic) NSString *systemVersion; // ivar: _systemVersion


+(id)sharedSystemInfo;
-(void)populateVersions;


@end


#endif