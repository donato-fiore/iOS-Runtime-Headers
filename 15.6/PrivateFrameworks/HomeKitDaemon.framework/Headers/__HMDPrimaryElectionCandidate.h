// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __HMDPRIMARYELECTIONCANDIDATE_H
#define __HMDPRIMARYELECTIONCANDIDATE_H

@class NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMDHomeKitVersion.h"
#import "HMDResidentDevice.h"

@interface __HMDPrimaryElectionCandidate : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *currentPrimaryIdentifier; // ivar: _currentPrimaryIdentifier
@property (readonly, copy, nonatomic) NSUUID *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, nonatomic) BOOL enabledAsResident; // ivar: _enabledAsResident
@property (readonly, copy, nonatomic) HMDHomeKitVersion *homeKitVersion; // ivar: _homeKitVersion
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) HMDResidentDevice *residentDevice; // ivar: _residentDevice


+(BOOL)supportsSecureCoding;
+(id)fromMessagePayload:(id)arg0 ;
-(NSInteger)compare:(id)arg0 currentPrimary:(id)arg1 outCriteria:(*NSUInteger)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVersion:(id)arg0 deviceIdentifier:(id)arg1 name:(id)arg2 currentPrimaryIdentifier:(id)arg3 enabledAsResident:(BOOL)arg4 ;
-(id)toMessagePayload;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif