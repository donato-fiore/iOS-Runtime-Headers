// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTSIGNALSTRENGTHINFO_H
#define CTSIGNALSTRENGTHINFO_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTSignalStrengthInfo : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *bars; // ivar: _bars
@property (retain, nonatomic) NSNumber *displayBars; // ivar: _displayBars
@property (retain, nonatomic) NSNumber *maxDisplayBars; // ivar: _maxDisplayBars


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif