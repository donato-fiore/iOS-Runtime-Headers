// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBVALIDATIONBUBBLEDELEGATE_H
#define WEBVALIDATIONBUBBLEDELEGATE_H

@class NSString;
@protocol UIPopoverPresentationControllerDelegate;

#import <Foundation/Foundation.h>


@interface WebValidationBubbleDelegate : NSObject <UIPopoverPresentationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;


@end


#endif