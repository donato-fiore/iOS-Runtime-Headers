// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUNAVIGATIONCONTROLLER_H
#define TUNAVIGATIONCONTROLLER_H

@class UINavigationController, NSString;
@protocol UIViewControllerStatusBarPartStyleProvider;



@interface TUNavigationController : UINavigationController <UIViewControllerStatusBarPartStyleProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger preferredCenterStatusBarStyle;
@property (readonly, nonatomic) NSInteger preferredLeadingStatusBarStyle;
@property (readonly, nonatomic) NSInteger preferredTrailingStatusBarStyle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger ts_preferredCenterStatusBarStyle;
@property (readonly, nonatomic) NSInteger ts_preferredLeadingStatusBarStyle;
@property (readonly, nonatomic) NSInteger ts_preferredTrailingStatusBarStyle;


-(NSInteger)convert:(NSInteger)arg0 ;
-(id)initWithRootViewController:(id)arg0 ;
-(id)initWithRootViewController:(id)arg0 navigationBarClass:(Class)arg1 ;


@end


#endif