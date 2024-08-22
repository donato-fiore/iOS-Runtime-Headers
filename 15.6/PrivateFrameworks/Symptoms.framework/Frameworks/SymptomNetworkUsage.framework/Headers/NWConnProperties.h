// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWCONNPROPERTIES_H
#define NWCONNPROPERTIES_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface NWConnProperties : NSObject

@property (retain, nonatomic) NSString *domainAttributedBundleId; // ivar: _domainAttributedBundleId
@property (retain, nonatomic) NSString *domainName; // ivar: _domainName
@property (retain, nonatomic) NSString *domainOwner; // ivar: _domainOwner
@property (retain, nonatomic) NSString *domainTrackerContext; // ivar: _domainTrackerContext
@property (nonatomic) BOOL hasNetAccess; // ivar: _hasNetAccess
@property (nonatomic) BOOL isNonAppInitiated; // ivar: _isNonAppInitiated
@property (nonatomic) BOOL isSilent; // ivar: _isSilent
@property (nonatomic) BOOL isTracker; // ivar: _isTracker
@property (retain, nonatomic) NSData *remoteAddress; // ivar: _remoteAddress
@property (readonly, nonatomic) unsigned short remotePort;


-(id)description;


@end


#endif