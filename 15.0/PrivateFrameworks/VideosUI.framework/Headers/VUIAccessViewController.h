// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIACCESSVIEWCONTROLLER_H
#define VUIACCESSVIEWCONTROLLER_H

@class UINavigationController, NSString;
@protocol UIViewControllerTransitioningDelegate;



@interface VUIAccessViewController : UINavigationController <UIViewControllerTransitioningDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_grantAccessToBundleIDs:(id)arg0 ;
+(BOOL)_grantAccessToChannelIDs:(id)arg0 isReconsent:(BOOL)arg1 ;
+(BOOL)grantAccessToBundleIDs:(id)arg0 ;
+(id)eligibleBundleIDs;
+(void)optInUser;
+(void)resolveBundleIDs:(id)arg0 completionHandler:(id)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithBundleIDs:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithChannels:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif