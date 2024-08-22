// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXREMOTECOMMANDSERVER_H
#define JFXREMOTECOMMANDSERVER_H

@class NSDistributedNotificationCenter;
@protocol JFXRemoteCommandServerDelegate;

#import <Foundation/Foundation.h>


@interface JFXRemoteCommandServer : NSObject

@property (weak, nonatomic) NSObject<JFXRemoteCommandServerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDistributedNotificationCenter *distributedNotificationCenter; // ivar: _distributedNotificationCenter


-(id)initWithDelegate:(id)arg0 ;
-(void)onAddAREffectWithIdentifierNotification:(id)arg0 ;
-(void)onAddEffectWithIdentifierNotification:(id)arg0 ;
-(void)onAddEffectWithNameNotification:(id)arg0 ;
-(void)onAddPosterWithIdentifierNotification:(id)arg0 ;
-(void)onAddPosterWithNameNotification:(id)arg0 ;
-(void)onAddShapeWithIdentifierNotification:(id)arg0 ;
-(void)onAddStickerNotification:(id)arg0 ;
-(void)onAddStickerWithIdentifierNotification:(id)arg0 ;
-(void)onAddTextNotification:(id)arg0 ;
-(void)onExportProjectNotification:(id)arg0 ;
-(void)onExportProjectResponseNotification:(id)arg0 ;
-(void)onGetEffectsRequest:(id)arg0 ;
-(void)onGetEffectsResponse:(id)arg0 ;
-(void)onNewProjectNotification:(id)arg0 ;
-(void)onOpenProjectNotification:(id)arg0 ;
-(void)onOpenProjectPickerNotification:(id)arg0 ;
-(void)onPlayClipAtIndexNotification:(id)arg0 ;
-(void)onPlayNotification:(id)arg0 ;
-(void)onRecordNotification:(id)arg0 ;
-(void)onRemoveEffectsNotification:(id)arg0 ;
-(void)onSetAnimojiNotification:(id)arg0 ;
-(void)onSetAspectRatioNotification:(id)arg0 ;
-(void)onSetFilterWithIdentifierNotification:(id)arg0 ;
-(void)onSetMemojiWithContentsOfFileNotification:(id)arg0 ;


@end


#endif