// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTHYBRIDENDPOINTERASSETINFO_H
#define _LTHYBRIDENDPOINTERASSETINFO_H

@class MAAsset, NSString;

#import <Foundation/Foundation.h>

#import "_LTTranslationContext.h"

@interface _LTHybridEndpointerAssetInfo : NSObject {
    MAAsset *_spgAsset;
    MAAsset *_sourceLanguageAsset;
    MAAsset *_targetLanguageAsset;
    _LTTranslationContext *_context;
}


@property (readonly, nonatomic) NSString *hybridepAssetFile; // ivar: _hybridepAssetFile
@property (readonly, nonatomic) NSString *spgAssetFile; // ivar: _spgAssetFile


-(BOOL)endpointerIsAvailableWithContext:(id)arg0 ;
-(BOOL)isPremium:(id)arg0 ;
-(id)caesuraModelURL;
-(id)endpointerModelURL:(id)arg0 ;
-(id)getPreferredAsset:(id)arg0 orAsset:(id)arg1 withLocale:(id)arg2 ;
-(id)initWithAvailableAssets:(id)arg0 context:(id)arg1 ;
-(id)selectAsset:(id)arg0 withLocale:(id)arg1 ;


@end


#endif