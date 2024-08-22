// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSWALLPAPEROBSERVERCONFIGURATION_H
#define PRSWALLPAPEROBSERVERCONFIGURATION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PRSWallpaperObserverConfiguration : NSObject {
    id *_handler;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (nonatomic) NSUInteger locations; // ivar: _locations
@property (nonatomic) BOOL needsSandboxExtensions; // ivar: _needsSandboxExtensions


+(id)configurationWithHandler:(id)arg0 ;
-(id)_initWithHandler:(id)arg0 ;
-(id)init;
-(void)setQueue:(id)arg0 ;


@end


#endif