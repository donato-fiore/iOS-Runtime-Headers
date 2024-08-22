// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUISOUNDMETERVIEWINTERFACEINTERNAL_H
#define HUISOUNDMETERVIEWINTERFACEINTERNAL_H


#import <Foundation/Foundation.h>


@interface HUISoundMeterViewInterfaceInternal : NSObject {
    ? viewController;
    ? data;
    ? soundMeterView;
    ? logger;
}




-(id)init;
-(id)initWithConfigurationType:(NSInteger)arg0 ;
-(id)soundMeterViewController;
-(void)updateViewsWithSlowLeq:(CGFloat)arg0 fastLeq:(CGFloat)arg1 thresholdLevel:(NSUInteger)arg2 ;


@end


#endif