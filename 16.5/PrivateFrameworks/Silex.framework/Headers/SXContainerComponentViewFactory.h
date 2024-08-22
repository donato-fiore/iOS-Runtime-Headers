// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCONTAINERCOMPONENTVIEWFACTORY_H
#define SXCONTAINERCOMPONENTVIEWFACTORY_H

@protocol SXMediaSharingPolicyProvider;


#import "SXComponentViewFactory.h"

@interface SXContainerComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) NSObject<SXMediaSharingPolicyProvider> *mediaSharingPolicyProvider; // ivar: _mediaSharingPolicyProvider


-(id)componentViewForComponent:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegateProvider:(id)arg2 componentStyleRendererFactory:(id)arg3 mediaSharingPolicyProvider:(id)arg4 ;
-(id)type;
-(int)role;


@end


#endif