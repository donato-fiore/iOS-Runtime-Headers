// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSOFTWAREUPDATECOUNTER_H
#define HFSOFTWAREUPDATECOUNTER_H


#import <Foundation/Foundation.h>


@interface HFSoftwareUpdateCounter : NSObject

@property (nonatomic) NSUInteger allUpdates; // ivar: _allUpdates
@property (nonatomic) NSUInteger firmwareUpdatesReadyToInstall; // ivar: _firmwareUpdatesReadyToInstall
@property (nonatomic) NSUInteger softwareUpdatesDownloading; // ivar: _softwareUpdatesDownloading
@property (nonatomic) NSUInteger softwareUpdatesInProgress; // ivar: _softwareUpdatesInProgress
@property (nonatomic) NSUInteger softwareUpdatesInstalled; // ivar: _softwareUpdatesInstalled
@property (nonatomic) NSUInteger softwareUpdatesInstalling; // ivar: _softwareUpdatesInstalling
@property (nonatomic) NSUInteger softwareUpdatesReadyToInstall; // ivar: _softwareUpdatesReadyToInstall
@property (nonatomic) NSUInteger updatesReadyToInstall; // ivar: _updatesReadyToInstall


-(id)description;
-(id)init;
-(id)initWithAccessories:(id)arg0 ;


@end


#endif