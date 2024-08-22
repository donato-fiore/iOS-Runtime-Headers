// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSENSORRECORDERSENSORDATAREQUESTBYID_H
#define CLSENSORRECORDERSENSORDATAREQUESTBYID_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLSensorRecorderSensorDataRequestById : NSObject <NSSecureCoding>



@property int dataType; // ivar: _dataType
@property NSUInteger identifier; // ivar: _identifier
@property NSUInteger metaIdentifier; // ivar: _metaIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif