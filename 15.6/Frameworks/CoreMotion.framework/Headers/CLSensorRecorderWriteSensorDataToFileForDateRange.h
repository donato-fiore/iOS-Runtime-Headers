// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSENSORRECORDERWRITESENSORDATATOFILEFORDATERANGE_H
#define CLSENSORRECORDERWRITESENSORDATATOFILEFORDATERANGE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLSensorRecorderWriteSensorDataToFileForDateRange : NSObject <NSSecureCoding>



@property int dataType; // ivar: _dataType
@property CGFloat endTime; // ivar: _endTime
@property CGFloat startTime; // ivar: _startTime


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif