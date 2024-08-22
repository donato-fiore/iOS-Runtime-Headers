// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPBEACONSHARE_H
#define SPBEACONSHARE_H

@class NSString, NSDate, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPHandle.h"

@interface SPBeaconShare : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL accepted; // ivar: _accepted
@property (copy, nonatomic) NSString *correlationIdentifier; // ivar: _correlationIdentifier
@property (copy, nonatomic) NSDate *expiration; // ivar: _expiration
@property (copy, nonatomic) SPHandle *handle; // ivar: _handle
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDate *shareDate; // ivar: _shareDate
@property (readonly, nonatomic) NSUInteger sharePrimaryIndex; // ivar: _sharePrimaryIndex


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 handle:(id)arg1 accepted:(BOOL)arg2 expiration:(id)arg3 correlationIdentifier:(id)arg4 shareDate:(id)arg5 sharePrimaryIndex:(NSUInteger)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif