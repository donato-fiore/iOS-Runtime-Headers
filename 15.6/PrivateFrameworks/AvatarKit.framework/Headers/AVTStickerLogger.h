// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSTICKERLOGGER_H
#define AVTSTICKERLOGGER_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface AVTStickerLogger : NSObject

@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log


+(id)sharedInstance;
-(id)init;
-(void)logCompleteBuildingProp:(id)arg0 startedAt:(CGFloat)arg1 ;
-(void)logCompleteExport:(id)arg0 startedAt:(CGFloat)arg1 ;
-(void)logCompletedApplyConfiguration:(id)arg0 ;
-(void)logConfigurationNotFoundForName:(id)arg0 ;
-(void)logErrorBuildingProp:(id)arg0 ;
-(void)logErrorCreatingAssetReader:(id)arg0 ;
-(void)logErrorShaderModifiers:(id)arg0 cantBeRemovedFromAvatar:(id)arg1 errors:(id)arg2 ;
-(void)logRemovingShaderModifiers:(id)arg0 fromAvatar:(id)arg1 wereApplied:(BOOL)arg2 ;
-(void)logShaderModifier:(id)arg0 appliedToAvatar:(id)arg1 material:(id)arg2 ;
-(void)logShaderModifier:(id)arg0 notRemovedFromAvatar:(id)arg1 reason:(id)arg2 ;
-(void)logShaderModifier:(id)arg0 removedFromAvatar:(id)arg1 material:(id)arg2 ;
-(void)logStartApplyConfiguration:(id)arg0 ;
-(void)logStartBuildingProp:(id)arg0 ;
-(void)logStartExport:(id)arg0 ;


@end


#endif