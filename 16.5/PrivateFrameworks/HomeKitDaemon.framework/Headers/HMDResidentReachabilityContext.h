// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDRESIDENTREACHABILITYCONTEXT_H
#define HMDRESIDENTREACHABILITYCONTEXT_H

@class HMFObject, NSNumber;
@protocol NSSecureCoding;



@interface HMDResidentReachabilityContext : HMFObject <NSSecureCoding>



@property (readonly, copy) NSNumber *mostRecentReachability; // ivar: _mostRecentReachability


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMostRecentReachability:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif