// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVACMCOMPASSDATA_H
#define CVACMCOMPASSDATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CVACLMotionTypeVector3.h"

@interface CVACMCompassData : NSObject <NSSecureCoding>



@property (retain, nonatomic) CVACLMotionTypeVector3 *fieldValues; // ivar: _fieldValues
@property (nonatomic) NSUInteger frameId; // ivar: _frameId
@property (nonatomic) NSUInteger sequenceNumber; // ivar: _sequenceNumber
@property (nonatomic) NSUInteger syncTimestamp; // ivar: _syncTimestamp
@property (nonatomic) float temperature; // ivar: _temperature
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif