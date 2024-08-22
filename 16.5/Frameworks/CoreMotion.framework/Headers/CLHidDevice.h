// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLHIDDEVICE_H
#define CLHIDDEVICE_H

@class HIDDevice, NSDictionary;

#import <Foundation/Foundation.h>


@interface CLHidDevice : NSObject

@property (nonatomic) HIDDevice *hidDevice; // ivar: _hidDevice
@property (retain, nonatomic) NSDictionary *matching; // ivar: _matching


-(BOOL)setReport:(NSInteger)arg0 payload:(char *)arg1 length:(NSInteger)arg2 ;
-(id)initWithHidDevice:(id)arg0 matchingDict:(id)arg1 ;
-(void)dealloc;


@end


#endif