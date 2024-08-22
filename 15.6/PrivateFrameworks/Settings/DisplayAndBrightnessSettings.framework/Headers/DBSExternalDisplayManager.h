// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DBSEXTERNALDISPLAYMANAGER_H
#define DBSEXTERNALDISPLAYMANAGER_H

@class BrightnessSystemClient, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface DBSExternalDisplayManager : NSObject

@property (nonatomic) BOOL autoBrightnessEnabled;
@property (retain, nonatomic) BrightnessSystemClient *brightnessSystemClient; // ivar: _brightnessSystemClient
@property (retain, nonatomic) NSString *currentHDRMode;
@property (readonly, nonatomic) BOOL externalDisplayAutoBrightnessAvailable;
@property (readonly, nonatomic) BOOL externalDisplayAvailable;
@property (readonly, nonatomic) NSNumber *externalDisplayBrightness;
@property (readonly, nonatomic) BOOL externalDisplayBrightnessAvailable;
@property (nonatomic) BOOL matchContent;


+(id)defaultManager;
-(id)externalDisplayName;
-(id)init;
-(id)preferredHDRModes;
-(id)supportedHDRModes;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif