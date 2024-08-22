// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSENSORRECORDERSENSORMETAREQUESTBYID_H
#define CLSENSORRECORDERSENSORMETAREQUESTBYID_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLSensorRecorderSensorMetaRequestById : NSObject <NSSecureCoding>



@property int dataType; // ivar: _dataType
@property NSUInteger identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif