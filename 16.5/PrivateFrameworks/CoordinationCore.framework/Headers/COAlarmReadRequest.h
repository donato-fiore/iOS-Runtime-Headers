// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COALARMREADREQUEST_H
#define COALARMREADREQUEST_H

@class NSUUID;


#import "COMeshRequest.h"

@interface COAlarmReadRequest : COMeshRequest

@property (readonly, nonatomic) NSUUID *accessoryUniqueIdentifier; // ivar: _accessoryUniqueIdentifier
@property (readonly, nonatomic) BOOL isForMerge; // ivar: _isForMerge
@property (readonly, nonatomic) BOOL requiresFilter; // ivar: _requiresFilter


+(BOOL)supportsSecureCoding;
+(id)acceptableResponses;
-(id)initForMerge;
-(id)initWithAccessory:(id)arg0 ;
-(id)initWithAccessoryUniqueIdentifier:(id)arg0 ;
-(id)initWithAccessoryUniqueIdentifier:(id)arg0 requiresFilter:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif