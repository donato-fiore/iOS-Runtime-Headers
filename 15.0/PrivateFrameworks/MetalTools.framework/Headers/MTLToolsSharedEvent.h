// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLTOOLSSHAREDEVENT_H
#define MTLTOOLSSHAREDEVENT_H

@class NSString;
@protocol MTLSharedEvent, MTLDevice;


#import "MTLToolsEvent.h"

@interface MTLToolsSharedEvent : MTLToolsEvent <MTLSharedEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property NSUInteger signaledValue;
@property (readonly) Class superclass;


-(BOOL)waitUntilSignaledValue:(NSUInteger)arg0 timeoutMS:(NSUInteger)arg1 ;
-(id)newSharedEventHandle;
-(void)notifyListener:(id)arg0 atValue:(NSUInteger)arg1 block:(id)arg2 ;


@end


#endif