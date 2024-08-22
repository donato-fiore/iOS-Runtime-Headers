// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNUINAVIGATIONLISTVIEWPERMISSIVEGESTURERECOGNIZERDELEGATE_H
#define _CNUINAVIGATIONLISTVIEWPERMISSIVEGESTURERECOGNIZERDELEGATE_H

@class NSString;
@protocol UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface _CNUINavigationListViewPermissiveGestureRecognizerDelegate : NSObject <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;


@end


#endif