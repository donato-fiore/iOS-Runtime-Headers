// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRODUCTKITCATALOGINTERNAL_H
#define PRODUCTKITCATALOGINTERNAL_H


#import <Foundation/Foundation.h>


@interface ProductKitCatalogInternal : NSObject {
    ? catalog;
    ? assetManager;
}




+(BOOL)isProductKitURL:(id)arg0 ;
-(id)init;
-(void)selectTestingAssetManager;
-(void)updateCatalogWithCompletionHandler:(id)arg0 ;
-(void)watchBandFilesForFeatureWithURL:(id)arg0 featureString:(id)arg1 completionHandler:(id)arg2 ;
-(void)watchBandImageForFeatureWithURL:(id)arg0 featureString:(id)arg1 completionHandler:(id)arg2 ;
-(void)watchBandStringForFeatureWithURL:(id)arg0 featureString:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif