// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTQOSLINKCHARACTERISTICS_H
#define CTQOSLINKCHARACTERISTICS_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTQoSLinkCharacteristics : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *bitRateGuaranteedDL; // ivar: _bitRateGuaranteedDL
@property (retain, nonatomic) NSNumber *bitRateGuaranteedUL; // ivar: _bitRateGuaranteedUL
@property (retain, nonatomic) NSNumber *bitRateMaxDL; // ivar: _bitRateMaxDL
@property (retain, nonatomic) NSNumber *bitRateMaxUL; // ivar: _bitRateMaxUL


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif