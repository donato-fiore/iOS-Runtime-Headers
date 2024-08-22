// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXVIDEOADVIEWCONTROLLERPROVIDER_H
#define SXVIDEOADVIEWCONTROLLERPROVIDER_H

@class NSString, UIViewController;
@protocol SXVideoAdViewControllerProviding;

#import <Foundation/Foundation.h>


@interface SXVideoAdViewControllerProvider : NSObject <SXVideoAdViewControllerProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController *viewControllerForModalPresentation;
@property (readonly, weak, nonatomic) NSObject<SXVideoAdViewControllerProviding> *viewControllerProvider; // ivar: _viewControllerProvider


-(id)initWithViewControllerProvider:(id)arg0 ;


@end


#endif