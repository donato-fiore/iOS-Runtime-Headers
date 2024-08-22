// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXISSUECOVERCOMPONENTVIEWFACTORY_H
#define SXISSUECOVERCOMPONENTVIEWFACTORY_H

@protocol SXIssueCoverViewProvider;


#import "SXComponentViewFactory.h"

@interface SXIssueCoverComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) NSObject<SXIssueCoverViewProvider> *viewProvider; // ivar: _viewProvider


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegateProvider:(id)arg2 componentStyleRendererFactory:(id)arg3 viewProvider:(id)arg4 ;
-(id)type;
-(int)role;


@end


#endif