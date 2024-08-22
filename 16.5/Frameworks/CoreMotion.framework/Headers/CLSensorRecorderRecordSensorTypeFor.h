// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSENSORRECORDERRECORDSENSORTYPEFOR_H
#define CLSENSORRECORDERRECORDSENSORTYPEFOR_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLSensorRecorderRecordSensorTypeFor : NSObject <NSSecureCoding>



@property int dataType; // ivar: _dataType
@property CGFloat duration; // ivar: _duration


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif