// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPREFERREDCONTENTSIZERELAYINGNAVIGATIONCONTROLLER_H
#define _UIPREFERREDCONTENTSIZERELAYINGNAVIGATIONCONTROLLER_H

@class UINavigationController, NSString;
@protocol _UIPreferredContentSizeRelayingContainer;



@interface _UIPreferredContentSizeRelayingNavigationController : UINavigationController <_UIPreferredContentSizeRelayingContainer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize preferredContentSize;
@property (copy, nonatomic) id *preferredContentSizeDidChange; // ivar: _preferredContentSizeDidChange
@property (readonly) Class superclass;


-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;


@end


#endif