// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUVOLUMEGROUPCOORDINATOR_H
#define MRUVOLUMEGROUPCOORDINATOR_H

@class NSString, NSArray;
@protocol MRUVolumeControllerCoordinationDelegate;

#import <Foundation/Foundation.h>

#import "MRUVolumeController.h"

@interface MRUVolumeGroupCoordinator : NSObject <MRUVolumeControllerCoordinationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MRUVolumeController *mainVolumeController; // ivar: _mainVolumeController
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *volumeControllers; // ivar: _volumeControllers
@property (retain, nonatomic) NSArray *volumeScales; // ivar: _volumeScales


-(BOOL)shouldAllowEqualization;
-(float)updateVolumeScales;
-(id)initWithMainVolumeController:(id)arg0 ;
-(void)beginEqualization;
-(void)equalizeVolumes;
-(void)finishEqualization;
-(void)volumeController:(id)arg0 volumeValueDidChange:(float)arg1 ;


@end


#endif