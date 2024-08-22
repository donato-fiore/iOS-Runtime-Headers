// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIACTIONPLAY_H
#define VUIACTIONPLAY_H

@class NSDictionary, NSDate, NSArray;


#import "VUIAction.h"
#import "VUIAppContext.h"

@interface VUIActionPlay : VUIAction

@property (weak, nonatomic) VUIAppContext *appContext; // ivar: _appContext
@property (retain, nonatomic) NSDictionary *contextData; // ivar: _contextData
@property (retain, nonatomic) NSDate *openURLCompletionDate; // ivar: _openURLCompletionDate
@property (nonatomic, getter=isUpNextPlayback) BOOL upNextPlayback; // ivar: _upNextPlayback
@property (retain, nonatomic) NSDate *userPlaybackInitiationDate; // ivar: _userPlaybackInitiationDate
@property (retain, nonatomic) NSArray *videosPlayables; // ivar: _videosPlayables


+(id)_hlsURLUpdatedWithBingeWatchingParamFromURL:(id)arg0 ;
+(void)_playMediaInfo:(id)arg0 watchType:(NSInteger)arg1 extrasInfo:(id)arg2 isRentAndWatchNow:(BOOL)arg3 completion:(id)arg4 ;
+(void)_playPlayables:(id)arg0 appContext:(id)arg1 watchType:(NSInteger)arg2 isUpNextPlayback:(BOOL)arg3 userPlaybackInitiationDate:(id)arg4 openURLCompletionDate:(id)arg5 ;
+(void)_presentPlaybackWithMediaInfo:(id)arg0 extrasInfo:(id)arg1 allowsCellular:(BOOL)arg2 completion:(id)arg3 ;
+(void)playMediaInfo:(id)arg0 watchType:(NSInteger)arg1 isRentAndWatchNow:(BOOL)arg2 ;
+(void)playMediaInfo:(id)arg0 watchType:(NSInteger)arg1 isRentAndWatchNow:(BOOL)arg2 completion:(id)arg3 ;
-(BOOL)isAccountRequired;
-(id)initWithContextData:(id)arg0 appContext:(id)arg1 ;
-(void)performWithTargetResponder:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif