// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDDAEMONPROCESS_H
#define CKDDAEMONPROCESS_H


#import <Foundation/Foundation.h>


@interface CKDDaemonProcess : NSObject

@property (readonly, nonatomic) BOOL isSystemInstalledBinary; // ivar: _isSystemInstalledBinary
@property (readonly, nonatomic) NSInteger processType; // ivar: _processType


+(id)currentProcess;
+(void)deriveCurrentProcessWithArgC:(int)arg0 argv:(*char *)arg1 ;
-(id)_initWithArgC:(int)arg0 argv:(*char *)arg1 ;
-(id)_initWithProcessType:(NSInteger)arg0 ;


@end


#endif