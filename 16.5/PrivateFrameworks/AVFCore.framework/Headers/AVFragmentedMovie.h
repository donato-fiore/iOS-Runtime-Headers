// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVFRAGMENTEDMOVIE_H
#define AVFRAGMENTEDMOVIE_H

@class NSArray;
@protocol AVFragmentMinding;


#import "AVMovie.h"

@interface AVFragmentedMovie : AVMovie <AVFragmentMinding>



@property (readonly, nonatomic, getter=isAssociatedWithFragmentMinder) BOOL associatedWithFragmentMinder;
@property (readonly, nonatomic) NSArray *tracks;


+(BOOL)expectsPropertyRevisedNotifications;
-(BOOL)_mindsFragments;
-(BOOL)_needsLegacyChangeNotifications;
-(Class)_classForMovieTracks;
-(id)initWithURL:(id)arg0 options:(id)arg1 ;
-(id)trackWithTrackID:(int)arg0 ;
-(id)tracksWithMediaCharacteristic:(id)arg0 ;
-(id)tracksWithMediaType:(id)arg0 ;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg0 ;


@end


#endif