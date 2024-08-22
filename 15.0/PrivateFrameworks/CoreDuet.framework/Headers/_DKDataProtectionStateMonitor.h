// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKDATAPROTECTIONSTATEMONITOR_H
#define _DKDATAPROTECTIONSTATEMONITOR_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "_DKDataProtectionMonitor.h"

@interface _DKDataProtectionStateMonitor : NSObject {
    _DKDataProtectionMonitor *_main;
    NSUUID *_handlerUUID;
}


@property (copy) id *changeHandler; // ivar: _changeHandler


-(BOOL)isDataAvailableFor:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif