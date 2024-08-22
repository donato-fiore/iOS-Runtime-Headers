// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPDATAPROTECTIONSTATEMONITOR_H
#define _DPDATAPROTECTIONSTATEMONITOR_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "_DPDataProtectionMaster.h"

@interface _DPDataProtectionStateMonitor : NSObject

@property (copy) id *changeHandler; // ivar: _changeHandler
@property (readonly) NSUUID *handlerUUID; // ivar: _handlerUUID
@property (readonly, nonatomic) _DPDataProtectionMaster *master; // ivar: _master


+(id)dataProtectionClassA;
+(id)dataProtectionClassC;
+(id)dataProtectionClassD;
-(BOOL)isDataAvailableFor:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif