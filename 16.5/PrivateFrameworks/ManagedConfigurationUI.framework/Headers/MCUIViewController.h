// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCUIVIEWCONTROLLER_H
#define MCUIVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PSStateRestoration;



@interface MCUIViewController : UIViewController <PSStateRestoration>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canBeShownFromSuspendedState;
-(void)dealloc;
-(void)updateExtendedLayoutIncludesOpaqueBars;


@end


#endif