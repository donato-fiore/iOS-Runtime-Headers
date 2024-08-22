// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDEBUGCOMPONENTVIEWFACTORY_H
#define SXDEBUGCOMPONENTVIEWFACTORY_H

@protocol SXLayoutInvalidator;


#import "SXComponentViewFactory.h"

@interface SXDebugComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) NSObject<SXLayoutInvalidator> *invalidator; // ivar: _invalidator


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegateProvider:(id)arg2 componentStyleRendererFactory:(id)arg3 invalidator:(id)arg4 ;
-(id)type;
-(int)role;


@end


#endif