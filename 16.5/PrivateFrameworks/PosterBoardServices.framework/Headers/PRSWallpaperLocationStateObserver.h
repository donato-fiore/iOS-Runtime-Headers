// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSWALLPAPERLOCATIONSTATEOBSERVER_H
#define PRSWALLPAPERLOCATIONSTATEOBSERVER_H


#import <Foundation/Foundation.h>


@interface PRSWallpaperLocationStateObserver : NSObject

@property (copy, nonatomic) id *handler; // ivar: _handler
@property (nonatomic) NSUInteger locations; // ivar: _locations
@property (nonatomic) BOOL needsSandboxExtensions; // ivar: _needsSandboxExtensions


-(id)init;


@end


#endif