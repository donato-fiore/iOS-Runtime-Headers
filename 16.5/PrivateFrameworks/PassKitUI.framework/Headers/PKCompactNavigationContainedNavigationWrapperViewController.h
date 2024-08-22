// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCOMPACTNAVIGATIONCONTAINEDNAVIGATIONWRAPPERVIEWCONTROLLER_H
#define PKCOMPACTNAVIGATIONCONTAINEDNAVIGATIONWRAPPERVIEWCONTROLLER_H



#import "PKWrapperViewController.h"
#import "PKCompactNavigationContainerController.h"

@interface PKCompactNavigationContainedNavigationWrapperViewController : PKWrapperViewController {
    PKCompactNavigationContainerController *_parentViewController;
}


@property (nonatomic) BOOL useParentSafeAreaInsets; // ivar: _useParentSafeAreaInsets


-(id)initWithWrappedViewController:(id)arg0 parentViewController:(id)arg1 ;
-(id)initWithWrappedViewController:(id)arg0 type:(NSInteger)arg1 ;
-(struct UIEdgeInsets )_edgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;


@end


#endif