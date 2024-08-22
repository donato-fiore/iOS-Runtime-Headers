// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXQUICKLOOKPREVIEWVIEWCONTROLLERFACTORY_H
#define SXQUICKLOOKPREVIEWVIEWCONTROLLERFACTORY_H

@class NSString;
@protocol SXQuickLookPreviewViewControllerFactory, SXMediaSharingPolicyProvider;

#import <Foundation/Foundation.h>


@interface SXQuickLookPreviewViewControllerFactory : NSObject <SXQuickLookPreviewViewControllerFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXMediaSharingPolicyProvider> *mediaSharingPolicyProvider; // ivar: _mediaSharingPolicyProvider
@property (readonly) Class superclass;


-(id)initWithMediaSharingPolicyProvider:(id)arg0 ;
-(id)viewControllerForFile:(id)arg0 transitionContext:(id)arg1 ;


@end


#endif