// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPUITABLECELLCONFIGURATION_H
#define CPUITABLECELLCONFIGURATION_H

@class NSString, UIImage;
@protocol CPUITableCellConfigurationProtocol;

#import <Foundation/Foundation.h>

#import "CPUITableCellAccessory.h"

@interface CPUITableCellConfiguration : NSObject <CPUITableCellConfigurationProtocol>



@property (retain, nonatomic) CPUITableCellAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) CGFloat playbackProgress; // ivar: _playbackProgress
@property (nonatomic) NSInteger playbackState; // ivar: _playbackState
@property (nonatomic) BOOL playingIndicatorLeadingSide; // ivar: _playingIndicatorLeadingSide
@property (nonatomic) BOOL shouldShowPlaybackProgress; // ivar: _shouldShowPlaybackProgress
@property (nonatomic) BOOL showActivityIndicator; // ivar: _showActivityIndicator
@property (nonatomic) BOOL showExplicit; // ivar: _showExplicit
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text


+(id)configurationWithText:(id)arg0 detailText:(id)arg1 image:(id)arg2 showExplicit:(BOOL)arg3 accessory:(id)arg4 showActivityIndicator:(BOOL)arg5 showPlaybackProgress:(BOOL)arg6 playbackProgress:(CGFloat)arg7 currentlyPlaying:(BOOL)arg8 ;
+(id)configurationWithText:(id)arg0 detailText:(id)arg1 image:(id)arg2 showExplicit:(BOOL)arg3 accessory:(id)arg4 showActivityIndicator:(BOOL)arg5 showPlaybackProgress:(BOOL)arg6 playbackProgress:(CGFloat)arg7 currentlyPlaying:(BOOL)arg8 playingIndicatorLeadingSide:(BOOL)arg9 ;
+(id)configurationWithText:(id)arg0 detailText:(id)arg1 image:(id)arg2 showExplicit:(BOOL)arg3 accessory:(id)arg4 showActivityIndicator:(BOOL)arg5 showPlaybackProgress:(BOOL)arg6 playbackProgress:(CGFloat)arg7 currentlyPlaying:(BOOL)arg8 playingIndicatorLeadingSide:(BOOL)arg9 isEnabled:(BOOL)arg10 ;
+(id)configurationWithText:(id)arg0 detailText:(id)arg1 image:(id)arg2 showExplicit:(BOOL)arg3 accessory:(id)arg4 showActivityIndicator:(BOOL)arg5 showPlaybackProgress:(BOOL)arg6 playbackProgress:(CGFloat)arg7 playbackState:(NSInteger)arg8 playingIndicatorLeadingSide:(BOOL)arg9 isEnabled:(BOOL)arg10 ;
-(BOOL)currentlyPlaying;


@end


#endif