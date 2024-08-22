// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSSCREENSNAPSHOTTER_H
#define SSSCREENSNAPSHOTTER_H

@class UIScreen;

#import <Foundation/Foundation.h>


@interface SSScreenSnapshotter : NSObject

@property (readonly, nonatomic) UIScreen *screen; // ivar: _screen


+(id)snapshotterForScreen:(id)arg0 ;
-(id)initWithScreen:(id)arg0 ;
-(id)takeScreenshot;


@end


#endif