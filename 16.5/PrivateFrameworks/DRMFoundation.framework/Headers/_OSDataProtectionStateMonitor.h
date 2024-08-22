// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _OSDATAPROTECTIONSTATEMONITOR_H
#define _OSDATAPROTECTIONSTATEMONITOR_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "_OSDataProtectionManager.h"

@interface _OSDataProtectionStateMonitor : NSObject

@property (copy, nonatomic) id *changeHandler; // ivar: _changeHandler
@property (readonly, nonatomic) NSUUID *handlerUUID; // ivar: _handlerUUID
@property (readonly, nonatomic) _OSDataProtectionManager *manager; // ivar: _manager


+(id)dataProtectionClassA;
+(id)dataProtectionClassC;
+(id)dataProtectionClassD;
-(BOOL)isDataAvailableFor:(id)arg0 ;
-(BOOL)unnotifiedIsDataAvailableForClassC;
-(id)init;
-(void)dealloc;


@end


#endif