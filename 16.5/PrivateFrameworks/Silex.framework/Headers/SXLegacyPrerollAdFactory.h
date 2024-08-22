// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXLEGACYPREROLLADFACTORY_H
#define SXLEGACYPREROLLADFACTORY_H

@class NSString;
@protocol SXVideoAdProviderFactory, SXScrollObserverManager;

#import <Foundation/Foundation.h>

#import "SXViewport.h"

@interface SXLegacyPrerollAdFactory : NSObject <SXVideoAdProviderFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXScrollObserverManager> *scrollObserverManager; // ivar: _scrollObserverManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXViewport *viewport; // ivar: _viewport


-(id)createVideoAdProviderForComponentView:(id)arg0 videoPlayerViewController:(id)arg1 analyticsReporter:(id)arg2 ;
-(id)initWithViewport:(id)arg0 scrollObserverManager:(id)arg1 ;


@end


#endif