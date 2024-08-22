// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPINSTRUMENTCLUSTERCONTROLLER_H
#define CPINSTRUMENTCLUSTERCONTROLLER_H

@class UIWindow;
@protocol CPInstrumentClusterControllerDelegate;

#import <Foundation/Foundation.h>


@interface CPInstrumentClusterController : NSObject

@property (readonly, nonatomic) NSUInteger compassSetting; // ivar: _compassSetting
@property (weak, nonatomic) NSObject<CPInstrumentClusterControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIWindow *instrumentClusterWindow; // ivar: _instrumentClusterWindow
@property (readonly, nonatomic) NSUInteger speedLimitSetting; // ivar: _speedLimitSetting


+(id)_clusterProvidingInterface;
-(id)_init;
-(void)_invalidate;


@end


#endif