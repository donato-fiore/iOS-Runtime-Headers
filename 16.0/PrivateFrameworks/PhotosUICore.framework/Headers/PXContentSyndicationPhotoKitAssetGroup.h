// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCONTENTSYNDICATIONPHOTOKITASSETGROUP_H
#define PXCONTENTSYNDICATIONPHOTOKITASSETGROUP_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PXContentSyndicationPhotoKitAssetGroup : NSObject

@property (readonly, nonatomic) NSArray *syndicationIdentifiers; // ivar: _syndicationIdentifiers
@property (readonly, nonatomic) NSArray *unsavedSyndicatedAssets; // ivar: _unsavedSyndicatedAssets
@property (readonly, nonatomic) NSArray *userLibraryAssets; // ivar: _userLibraryAssets


-(id)initWithAssets:(id)arg0 ;


@end


#endif