// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHEALTHSERVICECHARACTERISTIC_H
#define HDHEALTHSERVICECHARACTERISTIC_H

@class NSString, NSDate;
@protocol HDHealthServiceCharacteristic;

#import <Foundation/Foundation.h>


@interface HDHealthServiceCharacteristic : NSObject <HDHealthServiceCharacteristic>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *updateTime; // ivar: _updateTime


+(BOOL)uint16:(unsigned short)arg0 toData:(*char *)arg1 before:(char *)arg2 ;
+(BOOL)uint32:(unsigned int)arg0 toData:(*char *)arg1 before:(char *)arg2 ;
+(BOOL)uint8:(unsigned char)arg0 toData:(*char *)arg1 before:(char *)arg2 ;
+(CGFloat)doubleFromFLOAT:(unsigned int)arg0 ;
+(CGFloat)doubleFromFLOATData:(*char *)arg0 before:(char *)arg1 ;
+(float)floatFromSFLOAT:(unsigned short)arg0 ;
+(float)floatFromSFLOATData:(*char *)arg0 before:(char *)arg1 ;
+(id)_buildWithBinaryValue:(id)arg0 error:(*id)arg1 ;
+(id)buildWithBinaryValue:(id)arg0 updateTime:(id)arg1 error:(*id)arg2 ;
+(id)dateFromData:(*char *)arg0 before:(char *)arg1 calendar:(id)arg2 ;
+(id)uuid;
+(short)int16FromData:(*char *)arg0 before:(char *)arg1 ;
+(unsigned char)uint8FromData:(*char *)arg0 before:(char *)arg1 ;
+(unsigned int)uint24FromData:(*char *)arg0 before:(char *)arg1 ;
+(unsigned int)uint32FromData:(*char *)arg0 before:(char *)arg1 ;
+(unsigned short)uint16FromData:(*char *)arg0 before:(char *)arg1 ;
-(id)_init;
-(id)getBinaryValueWithError:(*id)arg0 ;


@end


#endif