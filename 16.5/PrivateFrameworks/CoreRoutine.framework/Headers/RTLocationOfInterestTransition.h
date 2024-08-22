// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTLOCATIONOFINTERESTTRANSITION_H
#define RTLOCATIONOFINTERESTTRANSITION_H

@class NSUUID, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTLocationOfInterestTransition : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger modeOfTransportation; // ivar: _modeOfTransportation
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, copy, nonatomic) NSDate *stopDate; // ivar: _stopDate
@property (readonly, nonatomic) NSUUID *visitIdentifierDestination; // ivar: _visitIdentifierDestination
@property (readonly, nonatomic) NSUUID *visitIdentifierOrigin; // ivar: _visitIdentifierOrigin


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 startDate:(id)arg1 stopDate:(id)arg2 visitIdentifierOrigin:(id)arg3 visitIdentifierDestination:(id)arg4 modeOfTransportation:(NSInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif