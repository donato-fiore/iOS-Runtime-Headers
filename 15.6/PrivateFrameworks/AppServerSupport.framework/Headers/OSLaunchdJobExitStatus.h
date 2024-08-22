// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSLAUNCHDJOBEXITSTATUS_H
#define OSLAUNCHDJOBEXITSTATUS_H


#import <Foundation/Foundation.h>


@interface OSLaunchdJobExitStatus : NSObject

@property (readonly, nonatomic) NSUInteger os_reason_code; // ivar: _os_reason_code
@property (readonly, nonatomic) NSUInteger os_reason_flags; // ivar: _os_reason_flags
@property (readonly, nonatomic) unsigned int os_reason_namespace; // ivar: _os_reason_namespace
@property (readonly, nonatomic) int wait4Status; // ivar: _wait4Status


-(id)initWithWait4Status:(int)arg0 os_reason_namespace:(unsigned int)arg1 os_reason_code:(NSUInteger)arg2 os_reason_flags:(NSUInteger)arg3 ;


@end


#endif