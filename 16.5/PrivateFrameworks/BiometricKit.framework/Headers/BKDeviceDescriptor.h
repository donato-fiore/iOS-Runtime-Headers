// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKDEVICEDESCRIPTOR_H
#define BKDEVICEDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface BKDeviceDescriptor : NSObject

@property (nonatomic) NSInteger type; // ivar: _type


+(id)deviceDescriptorForType:(NSInteger)arg0 ;
+(void)initialize;


@end


#endif