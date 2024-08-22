// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBHIDSERVICE_H
#define CBHIDSERVICE_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface CBHIDService : NSObject {
    NSObject<OS_os_log> *_logHandle;
}


@property (readonly) BOOL builtIn; // ivar: _builtIn
@property *__IOHIDEvent event; // ivar: _event
@property (readonly) NSUInteger registryID; // ivar: _registryID
@property (readonly) *__IOHIDServiceClient service; // ivar: _service


-(BOOL)conformsToHIDService:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)conformsToUsagePage:(NSUInteger)arg0 andUsage:(NSUInteger)arg1 ;
-(BOOL)setPropertyForKey:(id)arg0 withValue:(id)arg1 ;
-(BOOL)updateEventData;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)init;
-(id)initWithHIDServiceClient:(struct __IOHIDServiceClient *)arg0 andIdentifier:(id)arg1 ;
-(void)dealloc;


@end


#endif