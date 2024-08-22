// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRODUCTKITCATALOG_H
#define PRODUCTKITCATALOG_H


#import <Foundation/Foundation.h>

#import "ProductKitCatalogInternal.h"

@interface ProductKitCatalog : NSObject

@property (readonly, nonatomic) ProductKitCatalogInternal *underlyingObject; // ivar: _underlyingObject


+(BOOL)isProductKitURL:(id)arg0 ;
-(id)init;
-(void)updateCatalogWithCompletionHandler:(id)arg0 ;
-(void)watchBandFilesForFeatureWithURL:(id)arg0 featureString:(id)arg1 completionHandler:(id)arg2 ;
-(void)watchBandFilesForFeatureWithURL:(id)arg0 featureString:(id)arg1 variant:(id)arg2 completionHandler:(id)arg3 ;
-(void)watchBandImageForFeatureWithURL:(id)arg0 featureString:(id)arg1 completionHandler:(id)arg2 ;
-(void)watchBandImageForFeatureWithURL:(id)arg0 featureString:(id)arg1 variant:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif