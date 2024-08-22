// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONCONTROLLERDEFAULTVISUALSTYLEPROVIDER_H
#define _UINAVIGATIONCONTROLLERDEFAULTVISUALSTYLEPROVIDER_H

@class NSString;
@protocol _UINavigationControllerVisualStyleProviding;

#import <Foundation/Foundation.h>


@interface _UINavigationControllerDefaultVisualStyleProvider : NSObject <_UINavigationControllerVisualStyleProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)styleForNavigationController:(id)arg0 ;


@end


#endif