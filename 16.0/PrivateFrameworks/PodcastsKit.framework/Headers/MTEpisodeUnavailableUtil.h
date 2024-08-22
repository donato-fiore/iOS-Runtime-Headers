// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTEPISODEUNAVAILABLEUTIL_H
#define MTEPISODEUNAVAILABLEUTIL_H

@class MTSingleton;



@interface MTEpisodeUnavailableUtil : MTSingleton



+(NSUInteger)unavailableReasonForEpisode:(id)arg0 ;
+(id)longReasonTextForNoInternet;
+(id)longStringForUnavailableReason:(NSUInteger)arg0 podcastTitle:(id)arg1 ;
+(id)stringForUnavailableReason:(NSUInteger)arg0 ;
-(BOOL)showDialogForReason:(NSUInteger)arg0 podcastTitle:(id)arg1 completion:(id)arg2 ;
-(void)_presentErrorDialogWithTitle:(id)arg0 message:(id)arg1 handler:(id)arg2 ;


@end


#endif