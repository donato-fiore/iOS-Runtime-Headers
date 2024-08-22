// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSENSORRECORDERSENSORMETA_H
#define CLSENSORRECORDERSENSORMETA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLSensorRecorderSensorMeta : NSObject <NSSecureCoding>



@property NSUInteger dataIdentifier; // ivar: _dataIdentifier
@property unsigned int dataSize; // ivar: _dataSize
@property int dataType; // ivar: _dataType
@property NSUInteger identifier; // ivar: _identifier
@property BOOL movement; // ivar: _movement
@property unsigned int offset; // ivar: _offset
@property CGFloat startTime; // ivar: _startTime
@property NSUInteger timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataType:(int)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif