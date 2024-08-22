// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRTELEVISIONCONTROLLER_H
#define MRTELEVISIONCONTROLLER_H

@class NSString;
@protocol MRExternalDeviceControllerDelegate;


#import "MRExternalDeviceController.h"
#import "_MRTelevisionControllerBlockCallback.h"

@interface MRTelevisionController : MRExternalDeviceController <MRExternalDeviceControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _MRTelevisionControllerBlockCallback *discoveryCallback; // ivar: _discoveryCallback
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _MRTelevisionControllerBlockCallback *removalCallback; // ivar: _removalCallback
@property (readonly) Class superclass;


+(Class)externalDeviceClass;
-(id)init;
-(void)externalDeviceController:(id)arg0 didDiscoverDevice:(id)arg1 ;
-(void)externalDeviceController:(id)arg0 didRemoveDevice:(id)arg1 ;


@end


#endif