// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASLOCKSTATETRANSPORT_H
#define SASLOCKSTATETRANSPORT_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SASLockStateTransport : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *transport; // ivar: _transport


+(BOOL)supportsSecureCoding;
-(NSUInteger)SASLockState;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSASLockState:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif