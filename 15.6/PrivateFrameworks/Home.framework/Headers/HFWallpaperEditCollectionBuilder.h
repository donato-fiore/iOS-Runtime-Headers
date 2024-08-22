// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFWALLPAPEREDITCOLLECTIONBUILDER_H
#define HFWALLPAPEREDITCOLLECTIONBUILDER_H

@class NAFuture;
@protocol HFHomeKitObject><HMApplicationData;

#import <Foundation/Foundation.h>

#import "HFWallpaperEditCollection.h"

@interface HFWallpaperEditCollectionBuilder : NSObject

@property (retain, nonatomic) NSObject<HFHomeKitObject><HMApplicationData> *hkObject; // ivar: _hkObject
@property (nonatomic) BOOL hkObjectNewlyCreated; // ivar: _hkObjectNewlyCreated
@property (retain, nonatomic) NAFuture *initialEditCollectionFuture; // ivar: _initialEditCollectionFuture
@property (nonatomic) NSInteger namedWallpaperCollectionType; // ivar: _namedWallpaperCollectionType
@property (retain, nonatomic) HFWallpaperEditCollection *updatedEditCollection; // ivar: _updatedEditCollection


-(id)commitWallpaper;
-(id)description;
-(id)editCollectionForWallpaper:(id)arg0 image:(id)arg1 ;
-(id)initWithHomeKitObject:(id)arg0 namedWallpaperCollectionType:(NSInteger)arg1 ;
-(id)wallpaperEditCollectionFuture;
-(void)setWallpaper:(id)arg0 image:(id)arg1 ;


@end


#endif