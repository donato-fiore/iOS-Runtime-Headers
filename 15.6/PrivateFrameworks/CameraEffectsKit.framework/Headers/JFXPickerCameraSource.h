// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXPICKERCAMERASOURCE_H
#define JFXPICKERCAMERASOURCE_H

@class PVLivePlayerCameraSource, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface JFXPickerCameraSource : NSObject

@property (readonly, nonatomic) BOOL isPickerPreviewing;
@property (readonly, nonatomic) PVLivePlayerCameraSource *pickerSource;
@property (retain, nonatomic) NSMutableSet *registeredPickers; // ivar: _registeredPickers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *registeredPickersQueue; // ivar: _registeredPickersQueue
@property (retain, nonatomic) PVLivePlayerCameraSource *registeredPickersSource; // ivar: _registeredPickersSource


+(id)sharedInstance;
-(id)init;
-(void)registerPickerAsPreviewingWithObject:(id)arg0 ;
-(void)unregisterPickerAsPreviewingWithObject:(id)arg0 ;


@end


#endif