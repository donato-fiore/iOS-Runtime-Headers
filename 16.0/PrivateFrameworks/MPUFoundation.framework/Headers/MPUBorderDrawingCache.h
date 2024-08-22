// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPUBORDERDRAWINGCACHE_H
#define MPUBORDERDRAWINGCACHE_H

@class NSCache;

#import <Foundation/Foundation.h>

#import "MPUBorderView.h"

@interface MPUBorderDrawingCache : NSObject {
    MPUBorderView *_borderView;
    NSCache *_images;
}


@property (nonatomic) CGFloat displayScale; // ivar: _displayScale


-(id)_borderView;
-(id)imageForBorderConfiguration:(id)arg0 ;
-(id)init;
-(void)_applicationDidReceiveMemoryWarning:(id)arg0 ;
-(void)_invalidate;
-(void)dealloc;


@end


#endif