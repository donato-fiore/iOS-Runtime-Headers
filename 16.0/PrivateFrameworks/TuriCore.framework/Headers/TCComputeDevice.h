// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCCOMPUTEDEVICE_H
#define TCCOMPUTEDEVICE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TCComputeDevice : NSObject

@property (retain, nonatomic) NSArray *devices; // ivar: _devices
@property (nonatomic) BOOL forceCPU; // ivar: _forceCPU


-(id)asMLCDevice;
-(id)asMLCDevice:(NSInteger)arg0 ;
-(id)asVNDevice;
-(id)asVNDevice:(NSInteger)arg0 ;
-(id)initWithDevices:(id)arg0 forceCPU:(BOOL)arg1 ;


@end


#endif