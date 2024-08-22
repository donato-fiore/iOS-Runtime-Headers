// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRIGHTNESSSYSTEMCLIENTEXPORTEDOBJ_H
#define BRIGHTNESSSYSTEMCLIENTEXPORTEDOBJ_H

@class NSString;
@protocol BacklightSystemDelegateXpcProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BrightnessSystemClientInternal.h"

@interface BrightnessSystemClientExportedObj : NSObject <BacklightSystemDelegateXpcProtocol>

 {
    id *clientBlock;
    NSObject<OS_dispatch_queue> *queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BrightnessSystemClientInternal *target; // ivar: _target


-(void)dealloc;
-(void)notifyChangedProperty:(id)arg0 value:(id)arg1 ;
-(void)registerNotificationBlock:(id)arg0 ;
-(void)unregisterNotificationBlock;


@end


#endif