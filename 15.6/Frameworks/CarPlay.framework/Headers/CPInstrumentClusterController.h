// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPINSTRUMENTCLUSTERCONTROLLER_H
#define CPINSTRUMENTCLUSTERCONTROLLER_H

@class NSArray, NSXPCConnection, UIWindow;
@protocol CPInstrumentClusterControllerDelegate, CPInstrumentClusterProviding;

#import <Foundation/Foundation.h>


@interface CPInstrumentClusterController : NSObject

@property (copy, nonatomic) NSArray *attributedInactiveDescriptionVariants; // ivar: _attributedInactiveDescriptionVariants
@property (readonly, nonatomic) NSUInteger compassSetting; // ivar: _compassSetting
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (weak, nonatomic) NSObject<CPInstrumentClusterControllerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *inactiveDescriptionVariants; // ivar: _inactiveDescriptionVariants
@property (retain, nonatomic) NSObject<CPInstrumentClusterProviding> *instrumentClusterProvider; // ivar: _instrumentClusterProvider
@property (readonly, nonatomic) UIWindow *instrumentClusterWindow; // ivar: _instrumentClusterWindow
@property (readonly, nonatomic) NSUInteger speedLimitSetting; // ivar: _speedLimitSetting


+(id)_clusterProvidingInterface;
-(id)_init;
-(void)_connectToListenerEndpoint:(id)arg0 ;
-(void)_invalidate;
-(void)_sceneConnect:(id)arg0 ;


@end


#endif