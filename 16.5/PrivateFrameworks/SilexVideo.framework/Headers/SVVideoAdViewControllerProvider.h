// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVVIDEOADVIEWCONTROLLERPROVIDER_H
#define SVVIDEOADVIEWCONTROLLERPROVIDER_H

@class NSString, UIViewController;
@protocol SVVideoAdViewControllerProviding;

#import <Foundation/Foundation.h>


@interface SVVideoAdViewControllerProvider : NSObject <SVVideoAdViewControllerProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController *viewControllerForModalPresentation;
@property (readonly, weak, nonatomic) NSObject<SVVideoAdViewControllerProviding> *viewControllerProvider; // ivar: _viewControllerProvider


-(id)initWithViewControllerProvider:(id)arg0 ;


@end


#endif