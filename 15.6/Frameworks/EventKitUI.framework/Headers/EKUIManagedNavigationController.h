// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUIMANAGEDNAVIGATIONCONTROLLER_H
#define EKUIMANAGEDNAVIGATIONCONTROLLER_H

@class UINavigationController, NSString;
@protocol EKUIManagedViewController;



@interface EKUIManagedNavigationController : UINavigationController <EKUIManagedViewController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canBeDirectlyManaged;
-(BOOL)canManagePresentationStyle;
-(BOOL)wantsManagement;


@end


#endif