// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVFRAGMENTEDASSET_H
#define AVFRAGMENTEDASSET_H

@class NSArray;
@protocol AVFragmentMinding;


#import "AVURLAsset.h"
#import "AVFragmentedAssetInternal.h"

@interface AVFragmentedAsset : AVURLAsset <AVFragmentMinding>

 {
    AVFragmentedAssetInternal *_fragmentedAsset;
}


@property (readonly, nonatomic, getter=isAssociatedWithFragmentMinder) BOOL associatedWithFragmentMinder;
@property (readonly, nonatomic) NSArray *tracks;


+(BOOL)expectsPropertyRevisedNotifications;
+(id)fragmentedAssetWithURL:(id)arg0 options:(id)arg1 ;
-(BOOL)_mindsFragments;
-(id)initWithURL:(id)arg0 options:(id)arg1 ;
-(id)trackWithTrackID:(int)arg0 ;
-(id)tracksWithMediaCharacteristic:(id)arg0 ;
-(id)tracksWithMediaType:(id)arg0 ;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg0 ;


@end


#endif