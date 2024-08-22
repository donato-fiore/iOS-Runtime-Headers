// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVACMALSDATA_H
#define CVACMALSDATA_H

@class NSNumber, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CVACLMotionTypeDoubleVector3.h"
#import "CVACLMotionTypeVector4.h"

@interface CVACMALSData : NSObject <NSSecureCoding>



@property (retain, nonatomic) CVACLMotionTypeDoubleVector3 *colorComponents; // ivar: _colorComponents
@property (retain, nonatomic) NSNumber *gain; // ivar: _gain
@property (retain, nonatomic) NSNumber *integrationTime; // ivar: _integrationTime
@property (nonatomic) unsigned int luxValue; // ivar: _luxValue
@property (retain, nonatomic) CVACLMotionTypeVector4 *rawChannels; // ivar: _rawChannels
@property (nonatomic) NSUInteger syncTimestamp; // ivar: _syncTimestamp
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) unsigned int vendorNumChannels; // ivar: _vendorNumChannels
@property (retain, nonatomic) NSArray *vendorRawChannels; // ivar: _vendorRawChannels


+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif