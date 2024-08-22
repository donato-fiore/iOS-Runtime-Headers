// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSIMPLEALBUM_H
#define PLSIMPLEALBUM_H

@class NSString, NSOrderedSet, NSDate, NSArray;
@protocol PLAssetContainer;

#import <Foundation/Foundation.h>

#import "PLManagedAsset.h"

@interface PLSimpleAlbum : NSObject <PLAssetContainer>

 {
    NSString *_title;
    NSOrderedSet *_assets;
}


@property (readonly, nonatomic) NSUInteger approximateCount;
@property (readonly, retain, nonatomic) NSOrderedSet *assets;
@property (readonly, nonatomic) NSUInteger assetsCount;
@property (readonly, nonatomic) BOOL canShowAvalancheStacks;
@property (readonly, nonatomic) BOOL canShowComments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) NSDate *endDate;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEmpty;
@property (retain, nonatomic) PLManagedAsset *keyAsset; // ivar: _keyAsset
@property (readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSUInteger photosCount;
@property (retain, nonatomic) PLManagedAsset *secondaryKeyAsset; // ivar: _secondaryKeyAsset
@property (readonly, retain, nonatomic) NSDate *startDate;
@property (readonly) Class superclass;
@property (retain, nonatomic) PLManagedAsset *tertiaryKeyAsset; // ivar: _tertiaryKeyAsset
@property (readonly, retain, nonatomic) NSString *title;
@property (readonly, retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSUInteger videosCount;


-(BOOL)canPerformEditOperation:(NSUInteger)arg0 ;
-(NSInteger)_countOfAssetType:(short)arg0 ;
-(id)initWithTitle:(id)arg0 assets:(id)arg1 ;


@end


#endif