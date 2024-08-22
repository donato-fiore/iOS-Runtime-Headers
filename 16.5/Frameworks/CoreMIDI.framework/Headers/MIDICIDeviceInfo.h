// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIDICIDEVICEINFO_H
#define MIDICIDEVICEINFO_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MIDICIDeviceInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *family; // ivar: _family
@property (readonly, nonatomic) NSData *manufacturerID; // ivar: _manufacturerID
@property (readonly, nonatomic) unsigned int midiDestination; // ivar: _midiDestination
@property (readonly, nonatomic) NSData *modelNumber; // ivar: _model
@property (readonly, nonatomic) NSData *revisionLevel; // ivar: _revision


+(BOOL)supportsSecureCoding;
+(id)description;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestination:(unsigned int)arg0 deviceID:(struct MIDICIDeviceIdentification *)arg1 ;
-(id)initWithDestination:(unsigned int)arg0 manufacturer:(id)arg1 family:(id)arg2 model:(id)arg3 revision:(id)arg4 ;
-(struct MIDICIDeviceIdentification )asDeviceIDStruct;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif