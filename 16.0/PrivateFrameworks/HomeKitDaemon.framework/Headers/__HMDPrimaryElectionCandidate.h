// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __HMDPRIMARYELECTIONCANDIDATE_H
#define __HMDPRIMARYELECTIONCANDIDATE_H

@class NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMDHomeKitVersion.h"
#import "HMDResidentDevice.h"

@interface __HMDPrimaryElectionCandidate : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger capabilities; // ivar: _capabilities
@property (readonly, nonatomic) NSUInteger connectionType; // ivar: _connectionType
@property (readonly, copy, nonatomic) NSUUID *currentPrimaryIdentifier; // ivar: _currentPrimaryIdentifier
@property (readonly, copy, nonatomic) NSUUID *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, nonatomic) BOOL enabledAsResident; // ivar: _enabledAsResident
@property (readonly, copy, nonatomic) HMDHomeKitVersion *homeKitVersion; // ivar: _homeKitVersion
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL pcsEnabled; // ivar: _pcsEnabled
@property (retain, nonatomic) HMDResidentDevice *residentDevice; // ivar: _residentDevice


+(BOOL)supportsPingRequest:(NSUInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)setSupportsPingRequest:(BOOL)arg0 capabilities:(NSUInteger)arg1 ;
+(id)fromMessagePayload:(id)arg0 ;
-(BOOL)supportsPingRequest;
-(NSInteger)compare:(id)arg0 currentPrimary:(id)arg1 outCriteria:(*NSUInteger)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVersion:(id)arg0 deviceIdentifier:(id)arg1 name:(id)arg2 currentPrimaryIdentifier:(id)arg3 enabledAsResident:(BOOL)arg4 supportsPingRequest:(BOOL)arg5 connectionType:(NSUInteger)arg6 pcsEnabled:(BOOL)arg7 ;
-(id)redactedDescription;
-(id)toMessagePayload;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif