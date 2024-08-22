// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUSLIDESHOWCONTEXTREGISTRY_H
#define PUSLIDESHOWCONTEXTREGISTRY_H

@class NSMutableArray, NSArray;
@protocol PUSlideshowDisplayContext;

#import <Foundation/Foundation.h>


@interface PUSlideshowContextRegistry : NSObject

@property (retain, nonatomic, setter=_setDisplayContexts:) NSMutableArray *_displayContexts; // ivar: __displayContexts
@property (readonly, nonatomic) NSObject<PUSlideshowDisplayContext> *currentDisplayContext;
@property (readonly, copy, nonatomic) NSArray *displayContexts;


-(BOOL)addDisplayContext:(id)arg0 ;
-(BOOL)removeDisplayContext:(id)arg0 ;
-(id)init;


@end


#endif