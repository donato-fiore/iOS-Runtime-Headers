// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIPRESENTATIONACTIVATIONCANCELREASONTRANSPORT_H
#define SIRIPRESENTATIONACTIVATIONCANCELREASONTRANSPORT_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SiriPresentationActivationCancelReasonTransport : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *transport; // ivar: _transport


+(BOOL)supportsSecureCoding;
-(NSUInteger)cancelReason;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSiriPresentationActivationCancelReason:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif