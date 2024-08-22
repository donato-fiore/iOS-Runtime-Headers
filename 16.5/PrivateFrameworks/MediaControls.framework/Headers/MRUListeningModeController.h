// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRULISTENINGMODECONTROLLER_H
#define MRULISTENINGMODECONTROLLER_H

@class NSString;
@protocol MRUSystemOutputDeviceRouteControllerObserver, MRUListeningModeControllerDelegate;

#import <Foundation/Foundation.h>

#import "MRUSystemOutputDeviceRouteController.h"
#import "MRUListeningMode.h"

@interface MRUListeningModeController : NSObject <MRUSystemOutputDeviceRouteControllerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUListeningModeControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MRUSystemOutputDeviceRouteController *outputDeviceRouteController; // ivar: _outputDeviceRouteController
@property (readonly, nonatomic) MRUListeningMode *primaryListeningMode; // ivar: _primaryListeningMode
@property (readonly, nonatomic) MRUListeningMode *secondaryListeningMode; // ivar: _secondaryListeningMode
@property (readonly) Class superclass;


-(id)initWithOutputDeviceRouteController:(id)arg0 ;
-(id)listeningModeErrorMessageForOutputDevice:(id)arg0 ;
-(void)setListeningMode:(id)arg0 forOutputDeviceRoute:(id)arg1 previousListeningMode:(id)arg2 completion:(id)arg3 ;
-(void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)arg0 ;
-(void)updateListeningMode;


@end


#endif