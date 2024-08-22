// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOEDITAGGREGATESESSION_H
#define PUPHOTOEDITAGGREGATESESSION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface PUPhotoEditAggregateSession : NSObject

@property (nonatomic, setter=_setAutoCropAdjusted:) BOOL _autoCropAdjusted; // ivar: __autoCropAdjusted
@property (readonly, weak, nonatomic) NSArray *_autoCropKeys;
@property (nonatomic, setter=_setAutoCropReset:) BOOL _autoCropReset; // ivar: __autoCropReset
@property (nonatomic, setter=_setHasCropSuggestion:) BOOL _hasCropSuggestion; // ivar: __hasCropSuggestion
@property (nonatomic, setter=_setHasPerspectiveCropSuggestion:) BOOL _hasPerspectiveCropSuggestion; // ivar: __hasPerspectiveCropSuggestion
@property (nonatomic) CGFloat originalDuration; // ivar: _originalDuration
@property (retain, nonatomic) NSString *pluginIdentifier; // ivar: _pluginIdentifier
@property (nonatomic) BOOL pluginSaved; // ivar: _pluginSaved
@property (nonatomic) BOOL pluginStarted; // ivar: _pluginStarted
@property (nonatomic) BOOL shouldUseVideoKeys; // ivar: _shouldUseVideoKeys
@property (nonatomic) BOOL toggledOriginal; // ivar: _toggledOriginal


-(id)_sessionKeysWithEnd:(NSInteger)arg0 ;
-(id)finishSessionWithEnd:(NSInteger)arg0 newCompositionController:(id)arg1 oldCompositionController:(id)arg2 ;
-(struct __CFString *)_keyForSessionEnd:(NSInteger)arg0 ;
-(void)_recordKeys:(id)arg0 ;
-(void)finishSessionWithEnd:(NSInteger)arg0 ;
-(void)notifyDidAdjustCrop;
-(void)notifyDidApplyAutoCrop;
-(void)notifyDidApplyPerspectiveAutoCrop;
-(void)notifyDidResetCrop;


@end


#endif