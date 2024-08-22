// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBEXTENDEDDISPLAYMITIGATION_H
#define CBEXTENDEDDISPLAYMITIGATION_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface CBExtendedDisplayMitigation : NSObject {
    NSObject<OS_os_log> *_logHandle;
}


@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive


+(BOOL)isSupported;
-(BOOL)setActive:(BOOL)arg0 ;
-(float)getCap;
-(id)init;
-(void)dealloc;


@end


#endif