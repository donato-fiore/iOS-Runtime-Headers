// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPBEACONSHARE_H
#define SPBEACONSHARE_H

@class NSUUID, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPHandle.h"

@interface SPBeaconShare : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSUUID *beaconIdentifier; // ivar: _beaconIdentifier
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) SPHandle *owner; // ivar: _owner
@property (copy, nonatomic) SPHandle *sharee; // ivar: _sharee
@property (nonatomic) NSInteger state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 beaconIdentifier:(id)arg1 owner:(id)arg2 sharee:(id)arg3 state:(NSInteger)arg4 creationDate:(id)arg5 expirationDate:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif