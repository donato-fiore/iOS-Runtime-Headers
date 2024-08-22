// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPAVOUTPUTDEVICEDESCRIPTION_H
#define MPAVOUTPUTDEVICEDESCRIPTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MPAVOutputDeviceDescription : NSObject

@property (readonly, nonatomic) NSString *modelID; // ivar: _modelID
@property (readonly, nonatomic) NSInteger routeSubtype; // ivar: _routeSubtype
@property (readonly, nonatomic) NSInteger routeType; // ivar: _routeType
@property (readonly, nonatomic) NSString *uid; // ivar: _uid


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithDeviceType:(NSInteger)arg0 deviceSubtype:(NSInteger)arg1 uid:(id)arg2 ;
-(id)initWithDeviceType:(NSInteger)arg0 deviceSubtype:(NSInteger)arg1 uid:(id)arg2 modelID:(id)arg3 ;


@end


#endif