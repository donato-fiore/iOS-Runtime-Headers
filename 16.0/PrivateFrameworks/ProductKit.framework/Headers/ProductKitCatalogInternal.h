// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRODUCTKITCATALOGINTERNAL_H
#define PRODUCTKITCATALOGINTERNAL_H


#import <Foundation/Foundation.h>


@interface ProductKitCatalogInternal : NSObject {
    ? assetManager;
    ? catalog;
}




+(BOOL)isProductKitURL:(id)arg0 ;
-(id)init;
-(void)updateCatalogWithCompletionHandler:(id)arg0 ;
-(void)watchBandFilesForFeatureWithURL:(id)arg0 featureString:(id)arg1 variant:(id)arg2 completionHandler:(id)arg3 ;
-(void)watchBandImageForFeatureWithURL:(id)arg0 featureString:(id)arg1 variant:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif