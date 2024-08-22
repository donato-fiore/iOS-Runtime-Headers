// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APODMLRERANKER_H
#define APODMLRERANKER_H

@class NSArray, NSError, NSDate;

#import <Foundation/Foundation.h>

#import "APOdmlAssetManager.h"
#import "APOdmlUnfairLock.h"

@interface APOdmlReranker : NSObject

@property (retain, nonatomic) APOdmlAssetManager *assetManager; // ivar: _assetManager
@property (readonly, nonatomic) NSUInteger ident; // ivar: _ident
@property (readonly, nonatomic) BOOL isPersonalizedAdsEnabled; // ivar: _isPersonalizedAdsEnabled
@property (retain, nonatomic) NSArray *originalAds; // ivar: _originalAds
@property (nonatomic) NSUInteger placementType; // ivar: _placementType
@property (copy, nonatomic) id *rerankResponse; // ivar: _rerankResponse
@property (retain, nonatomic) APOdmlUnfairLock *rerankResponseLock; // ivar: _rerankResponseLock
@property (retain, nonatomic) NSArray *rerankedAds; // ivar: _rerankedAds
@property (retain) NSError *rerankerError; // ivar: _rerankerError
@property (retain, nonatomic) NSDate *rerankingStartDate; // ivar: _rerankingStartDate


+(id)rerankSerialQueue;
-(BOOL)sendRerankResponseIfAvailable:(id)arg0 error:(id)arg1 ;
-(id)adSpecificFeatures:(id)arg0 ;
-(id)init;
-(id)initWithPersonalizedAdsEnabled:(BOOL)arg0 assetManager:(id)arg1 placementType:(NSUInteger)arg2 ;
-(id)initWithPersonalizedAdsEnabled:(BOOL)arg0 placementType:(NSUInteger)arg1 ;
-(id)sortableArray:(id)arg0 ;
-(void)_handleError:(NSInteger)arg0 ;
-(void)getRerankedAdsWithTimeLimit:(CGFloat)arg0 completion:(id)arg1 ;
-(void)setAndRerankAds:(id)arg0 ;


@end


#endif