// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVACMCOMPASSDATA_H
#define CVACMCOMPASSDATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CVACLMotionTypeVector3.h"

@interface CVACMCompassData : NSObject <NSSecureCoding>



@property (retain, nonatomic) CVACLMotionTypeVector3 *fieldValues; // ivar: _fieldValues
@property (nonatomic) NSUInteger syncTimestamp; // ivar: _syncTimestamp
@property (nonatomic) float temperature; // ivar: _temperature
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif