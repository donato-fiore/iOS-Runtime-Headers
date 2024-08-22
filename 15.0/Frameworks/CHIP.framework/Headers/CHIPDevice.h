// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPDEVICE_H
#define CHIPDEVICE_H

@class NSRecursiveLock;

#import <Foundation/Foundation.h>


@interface CHIPDevice : NSObject

@property (readonly) *void cppDevice; // ivar: _cppDevice
@property (readonly, nonatomic) NSRecursiveLock *lock; // ivar: _lock


-(*void)internalDevice;
-(BOOL)isActive;
-(BOOL)openPairingWindow:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithDevice:(*void)arg0 ;
-(id)openPairingWindowWithPIN:(NSUInteger)arg0 discriminator:(NSUInteger)arg1 setupPIN:(NSUInteger)arg2 error:(*id)arg3 ;


@end


#endif