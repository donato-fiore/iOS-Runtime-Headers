// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTDATACONNECTIONAVAILABILITYSTATUS_H
#define CTDATACONNECTIONAVAILABILITYSTATUS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTDataConnectionAvailabilityStatus : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL available; // ivar: _available
@property (nonatomic) int csiError; // ivar: _csiError


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif