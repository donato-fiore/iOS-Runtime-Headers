// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHIMPORTASSETBUNDLEASSET_H
#define PHIMPORTASSETBUNDLEASSET_H

@class PFAssetBundle;


#import "PHImportAsset.h"

@interface PHImportAssetBundleAsset : PHImportAsset

@property (retain, nonatomic) PFAssetBundle *assetBundle; // ivar: _assetBundle


-(id)accessibilityDescription;
-(id)assetDescription;
-(id)creationDate;
-(id)initWithAssetBundleAtURL:(id)arg0 withImportSource:(id)arg1 ;
-(id)keywordTitles;
-(id)timeZone;
-(id)title;


@end


#endif