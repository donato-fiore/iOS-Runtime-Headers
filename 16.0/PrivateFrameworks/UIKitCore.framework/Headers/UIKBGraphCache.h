// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBGRAPHCACHE_H
#define UIKBGRAPHCACHE_H

@class NSDictionary, NSString, NSMutableDictionary;
@protocol _UIScreenBasedObject;

#import <Foundation/Foundation.h>

#import "UIScreen.h"

@interface UIKBGraphCache : NSObject <_UIScreenBasedObject>

 {
    UIScreen *_screen;
}


@property (readonly) UIScreen *_intendedScreen;
@property (readonly) NSDictionary *_options;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *graphCache; // ivar: _graphCache
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)graphCacheForScreen:(id)arg0 ;
-(BOOL)_matchingOptions:(id)arg0 ;
-(id)_initWithScreen:(id)arg0 options:(id)arg1 ;


@end


#endif