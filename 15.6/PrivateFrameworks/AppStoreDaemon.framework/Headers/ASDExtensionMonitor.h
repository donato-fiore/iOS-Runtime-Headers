// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDEXTENSIONMONITOR_H
#define ASDEXTENSIONMONITOR_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface ASDExtensionMonitor : NSObject {
    NSDictionary *_extensionAttributes;
    id *_matchingContext;
    os_unfair_lock_s _lock;
    NSArray *_extensions;
    id *_updateHandler;
}


@property (readonly) NSArray *extensions;
@property (copy, nonatomic) id *updateHandler;


-(id)initWithAttributes:(id)arg0 ;
-(void)_startMonitoringExtensions;
-(void)_stopMonitoringExtensions;
-(void)dealloc;


@end


#endif