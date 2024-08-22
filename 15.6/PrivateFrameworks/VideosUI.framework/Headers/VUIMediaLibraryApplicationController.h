// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMEDIALIBRARYAPPLICATIONCONTROLLER_H
#define VUIMEDIALIBRARYAPPLICATIONCONTROLLER_H

@protocol VUIMediaLibraryApplicationControllerDelegate;

#import <Foundation/Foundation.h>


@interface VUIMediaLibraryApplicationController : NSObject

@property (retain, nonatomic) NSObject<VUIMediaLibraryApplicationControllerDelegate> *delegate; // ivar: _delegate


+(id)defaultController;
-(BOOL)isCellularDataForPlaybackEnabled;
-(BOOL)shouldWarnAboutPlaybackQualityForRentalMediaItem:(id)arg0 ;
-(NSUInteger)assetTypeForRentalMediaItem:(id)arg0 ;
-(id)settingsURL;
-(void)clearCellularPlaybackQualityOverrides;
-(void)overrideCellularPlaybackQuality:(NSUInteger)arg0 forMediaItem:(id)arg1 ;
-(void)removeRentalMediaItem:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif