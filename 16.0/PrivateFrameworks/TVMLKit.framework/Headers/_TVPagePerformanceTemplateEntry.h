// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVPAGEPERFORMANCETEMPLATEENTRY_H
#define _TVPAGEPERFORMANCETEMPLATEENTRY_H

@class NSHashTable, IKViewElement, NSString;

#import <Foundation/Foundation.h>

#import "_TVPagePerformanceController.h"

@interface _TVPagePerformanceTemplateEntry : NSObject {
    NSHashTable *_initialOnScreenImageProxies;
    BOOL _listeningForImageProxyWillLoad;
    BOOL _listeningForImageProxyDidLoad;
}


@property (weak, nonatomic) _TVPagePerformanceController *performanceController; // ivar: _performanceController
@property (nonatomic) NSUInteger templateDidLoadLastImageProxy; // ivar: _templateDidLoadLastImageProxy
@property (nonatomic) NSUInteger templateDidLoadResources; // ivar: _templateDidLoadResources
@property (nonatomic) NSUInteger templateDidRender; // ivar: _templateDidRender
@property (nonatomic) NSUInteger templateDidTransition; // ivar: _templateDidTransition
@property (weak, nonatomic) IKViewElement *templateElement; // ivar: _templateElement
@property (copy, nonatomic) NSString *templateElementName; // ivar: _templateElementName
@property (readonly, nonatomic) NSUInteger templateRenderDuration;
@property (readonly, nonatomic) NSUInteger templateResourcesDuration;
@property (readonly, nonatomic) NSUInteger templateTransitionDuration;
@property (nonatomic) NSUInteger templateUpdateCount; // ivar: _templateUpdateCount
@property (nonatomic) NSUInteger templateWillLoadFirstImageProxy; // ivar: _templateWillLoadFirstImageProxy
@property (nonatomic) NSUInteger templateWillLoadResources; // ivar: _templateWillLoadResources
@property (nonatomic) NSUInteger templateWillRender; // ivar: _templateWillRender
@property (nonatomic) NSUInteger templateWillTransition; // ivar: _templateWillTransition


-(id)initWithPagePerformanceController:(id)arg0 forTemplateElement:(id)arg1 ;
-(void)_beginListeningForInitialImageProxyLoadNotifications;
-(void)_maybeStopListeningForInitialImageProxyLoadNotifications;
-(void)_receivedImageProxyDidLoadNotification:(id)arg0 ;
-(void)_receivedImageProxyWillLoadNotification:(id)arg0 ;
-(void)_stopListeningForInitialImageProxyLoadNotifications;
-(void)dealloc;
-(void)markTemplateDidRender;
-(void)markTemplateDidTransition;
-(void)markTemplateWillRender;
-(void)markTemplateWillTransition;


@end


#endif