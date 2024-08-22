// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AXDYLDIMAGEMONITOR_H
#define _AXDYLDIMAGEMONITOR_H

@class NSHashTable, NSString;
@protocol AXImageMonitor, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _AXDyldImageMonitor : NSObject <AXImageMonitor>

 {
    NSHashTable *_imageMonitorObservers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(id)loadedImagePaths;
-(void)_dyldDidAddImage:(id)arg0 ;
-(void)addImageMonitorObserver:(id)arg0 ;
-(void)enumerateLoadedImagePaths:(id)arg0 ;
-(void)removeImageMonitorObserver:(id)arg0 ;


@end


#endif