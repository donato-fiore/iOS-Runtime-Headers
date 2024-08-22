// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSEXTERNALDISPLAYMANAGER_H
#define DBSEXTERNALDISPLAYMANAGER_H

@class BrightnessSystemClient, NSString, SBSExternalDisplayService, NSNumber;
@protocol SBSExternalDisplayServiceObserver;

#import <Foundation/Foundation.h>


@interface DBSExternalDisplayManager : NSObject <SBSExternalDisplayServiceObserver>



@property (nonatomic) BOOL autoBrightnessEnabled;
@property (retain, nonatomic) BrightnessSystemClient *brightnessSystemClient; // ivar: _brightnessSystemClient
@property (retain, nonatomic) NSString *currentHDRMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBSExternalDisplayService *displayService; // ivar: _displayService
@property (readonly, nonatomic) BOOL externalDisplayAutoBrightnessAvailable;
@property (readonly, nonatomic) BOOL externalDisplayAvailable;
@property (readonly, nonatomic) NSNumber *externalDisplayBrightness;
@property (readonly, nonatomic) BOOL externalDisplayBrightnessAvailable;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL matchContent;
@property (readonly) Class superclass;


+(id)defaultManager;
-(BOOL)deviceSupportsChamoisExternalDisplay;
-(id)externalDisplayName;
-(id)init;
-(id)mainDisplayImageWithWidth:(CGFloat)arg0 ;
-(id)mainDisplayName;
-(id)preferredHDRModes;
-(id)supportedHDRModes;
-(struct CGSize )externalDisplaySize;
-(struct CGSize )mainDisplaySize;
-(void)dealloc;
-(void)externalDisplayDidConnect:(id)arg0 ;
-(void)externalDisplayWillDisconnect:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif