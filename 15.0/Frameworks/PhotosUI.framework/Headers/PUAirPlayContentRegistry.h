// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUAIRPLAYCONTENTREGISTRY_H
#define PUAIRPLAYCONTENTREGISTRY_H

@class UIViewController, NSPointerArray;
@protocol PHAirPlayControllerContentProvider;

#import <Foundation/Foundation.h>


@interface PUAirPlayContentRegistry : NSObject

@property (retain, nonatomic, setter=_setCachedCurrentContent:) UIViewController *_cachedCurrentContent; // ivar: __cachedCurrentContent
@property (retain, nonatomic, setter=_setContentProviders:) NSPointerArray *_contentProviders; // ivar: __contentProviders
@property (nonatomic, setter=_setCurrentContentProvider:) NSObject<PHAirPlayControllerContentProvider> *currentContentProvider; // ivar: _currentContentProvider


-(NSUInteger)_indexOfContentProvider:(id)arg0 ;
-(id)contentForController:(id)arg0 ;
-(id)init;
-(void)_invalidateCurrentContent;
-(void)_updateCurrentContentProvider;
-(void)addContentProvider:(id)arg0 ;
-(void)clearContent;
-(void)removeContentProvider:(id)arg0 ;


@end


#endif