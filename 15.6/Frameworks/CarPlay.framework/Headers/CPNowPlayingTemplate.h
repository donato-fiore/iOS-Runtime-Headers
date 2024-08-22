// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPNOWPLAYINGTEMPLATE_H
#define CPNOWPLAYINGTEMPLATE_H

@class NSString, NSArray, CARObserverHashTable, NAFuture;
@protocol CPNowPlayingClientTemplateDelegate;


#import "CPTemplate.h"

@interface CPNowPlayingTemplate : CPTemplate <CPNowPlayingClientTemplateDelegate>



@property (nonatomic, getter=isAlbumArtistButtonEnabled) BOOL albumArtistButtonEnabled; // ivar: _albumArtistButtonEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *nowPlayingButtons; // ivar: _nowPlayingButtons
@property (retain, nonatomic) CARObserverHashTable *nowPlayingObservers; // ivar: _nowPlayingObservers
@property (readonly) Class superclass;
@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (nonatomic, getter=isUpNextButtonEnabled) BOOL upNextButtonEnabled; // ivar: _upNextButtonEnabled
@property (copy, nonatomic) NSString *upNextTitle; // ivar: _upNextTitle


+(BOOL)supportsSecureCoding;
+(id)sharedTemplate;
-(id)_updateLowerRegionButtons:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)leadingNavigationBarButtons;
-(id)trailingNavigationBarButtons;
-(void)_updateNowPlayingTemplate;
-(void)addObserver:(id)arg0 ;
-(void)albumArtistButtonTapped;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleAction:(NSInteger)arg0 forControlIdentifier:(id)arg1 ;
-(void)handleActionForControlIdentifier:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setLeadingNavigationBarButtons:(id)arg0 ;
-(void)setTrailingNavigationBarButtons:(id)arg0 ;
-(void)upNextButtonTapped;
-(void)updateNowPlayingButtons:(id)arg0 ;


@end


#endif