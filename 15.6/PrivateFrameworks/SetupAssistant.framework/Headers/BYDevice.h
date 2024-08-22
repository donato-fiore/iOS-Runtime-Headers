// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BYDEVICE_H
#define BYDEVICE_H

@class NSString;
@protocol BYDeviceProvider;

#import <Foundation/Foundation.h>


@interface BYDevice : NSObject <BYDeviceProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasHomeButton; // ivar: _hasHomeButton
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int mainScreenClass; // ivar: _mainScreenClass
@property (readonly, nonatomic) NSInteger size; // ivar: _size
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)currentDevice;
-(id)currentDevice;
-(id)init;


@end


#endif