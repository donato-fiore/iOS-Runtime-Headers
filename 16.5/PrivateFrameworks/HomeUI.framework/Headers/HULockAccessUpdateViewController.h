// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HULOCKACCESSUPDATEVIEWCONTROLLER_H
#define HULOCKACCESSUPDATEVIEWCONTROLLER_H

@class OBWelcomeController, NSString, HMHome, NAFuture;
@protocol HUPreloadableViewController;



@interface HULockAccessUpdateViewController : OBWelcomeController <HUPreloadableViewController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NAFuture *preloadFuture; // ivar: _preloadFuture
@property (readonly) Class superclass;


-(id)hu_preloadContent;
-(id)initWithHome:(id)arg0 ;


@end


#endif