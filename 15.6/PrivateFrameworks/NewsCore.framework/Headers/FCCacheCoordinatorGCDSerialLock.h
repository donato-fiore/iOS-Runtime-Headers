// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCACHECOORDINATORGCDSERIALLOCK_H
#define FCCACHECOORDINATORGCDSERIALLOCK_H

@class NSString;
@protocol FCCacheCoordinatorLocking, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FCCacheCoordinatorGCDSerialLock : NSObject <FCCacheCoordinatorLocking>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)performReadSync:(id)arg0 ;
-(void)performWriteSync:(id)arg0 ;


@end


#endif