// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSENSORCONFIGURATION_H
#define BWSENSORCONFIGURATION_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface BWSensorConfiguration : NSObject

@property (readonly, nonatomic) NSDictionary *cameraInfo; // ivar: _cameraInfo
@property (readonly, nonatomic) NSString *portType; // ivar: _portType
@property (readonly, nonatomic) NSDictionary *sensorIDDictionary; // ivar: _sensorIDDictionary
@property (readonly, nonatomic) NSString *sensorIDString; // ivar: _sensorIDString


-(id)description;
-(id)initWithPortType:(id)arg0 sensorIDString:(id)arg1 sensorIDDictionary:(id)arg2 cameraInfo:(id)arg3 ;
-(void)dealloc;


@end


#endif