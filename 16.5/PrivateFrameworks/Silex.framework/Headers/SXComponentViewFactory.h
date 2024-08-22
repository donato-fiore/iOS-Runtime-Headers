// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCOMPONENTVIEWFACTORY_H
#define SXCOMPONENTVIEWFACTORY_H

@class NSString;
@protocol SXComponentViewFactory, SXDOMObjectProviding, SXComponentStyleRendererFactory, SXPresentationDelegateProvider;

#import <Foundation/Foundation.h>

#import "SXViewport.h"

@interface SXComponentViewFactory : NSObject <SXComponentViewFactory>



@property (readonly, nonatomic) NSObject<SXDOMObjectProviding> *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (readonly, nonatomic) NSObject<SXComponentStyleRendererFactory> *componentStyleRendererFactory; // ivar: _componentStyleRendererFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXPresentationDelegateProvider> *presentationDelegateProvider; // ivar: _presentationDelegateProvider
@property (readonly, nonatomic) int role;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) SXViewport *viewport; // ivar: _viewport


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegateProvider:(id)arg2 componentStyleRendererFactory:(id)arg3 ;


@end


#endif