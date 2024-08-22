// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPRESENTATIONCONTROLLERNULLVISUALSTYLEPROVIDER_H
#define _UIPRESENTATIONCONTROLLERNULLVISUALSTYLEPROVIDER_H

@class NSString;
@protocol _UIPresentationControllerVisualStyleProviding;

#import <Foundation/Foundation.h>


@interface _UIPresentationControllerNullVisualStyleProvider : NSObject <_UIPresentationControllerVisualStyleProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)defaultStyleForPresentationController:(id)arg0 ;
-(id)styleForAlertPresentationController:(id)arg0 ;
-(id)styleForPopoverPresentationController:(id)arg0 ;
-(id)styleForRootPresentationController:(id)arg0 ;
-(id)styleForSheetPresentationController:(id)arg0 ;


@end


#endif