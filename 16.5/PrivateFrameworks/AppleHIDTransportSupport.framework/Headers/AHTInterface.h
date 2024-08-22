// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AHTINTERFACE_H
#define AHTINTERFACE_H



#import "AHTCommon.h"

@interface AHTInterface : AHTCommon

@property (readonly, nonatomic) unsigned char interfaceID; // ivar: _interfaceID


+(id)allInterfaces;
+(id)withService:(unsigned int)arg0 ;
-(BOOL)getPower:(*NSInteger)arg0 ;
-(BOOL)getReport:(unsigned char)arg0 withData:(id)arg1 ;
-(BOOL)reset;
-(BOOL)setEnable:(BOOL)arg0 ;
-(BOOL)setPower:(NSInteger)arg0 ;
-(BOOL)setReport:(unsigned char)arg0 withData:(id)arg1 ;
-(id)description;
-(id)initWithService:(unsigned int)arg0 ;


@end


#endif