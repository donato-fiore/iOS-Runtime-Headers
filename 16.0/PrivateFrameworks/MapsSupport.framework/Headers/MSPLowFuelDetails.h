// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPLOWFUELDETAILS_H
#define MSPLOWFUELDETAILS_H

@class NSNumber, NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSPLowFuelDetails : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSNumber *engineType; // ivar: _engineType
@property (retain, nonatomic) NSData *iconData; // ivar: _iconData
@property (retain, nonatomic) NSData *iconDataCarPlay; // ivar: _iconDataCarPlay
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 engineType:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif