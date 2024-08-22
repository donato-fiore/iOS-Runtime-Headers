// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXAVPLAYERITEMFACTORY_H
#define SXAVPLAYERITEMFACTORY_H

@class NSArray, NSString;
@protocol SXAVPlayerItemFactory, SXAVURLAssetFactory;

#import <Foundation/Foundation.h>


@interface SXAVPlayerItemFactory : NSObject <SXAVPlayerItemFactory>



@property (readonly, nonatomic) NSObject<SXAVURLAssetFactory> *assetFactory; // ivar: _assetFactory
@property (readonly, copy, nonatomic) NSArray *automaticallyLoadedAssetKeys; // ivar: _automaticallyLoadedAssetKeys
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createPlayerItemWithURL:(id)arg0 ;
-(id)initWithAutomaticallyLoadedAssetKeys:(id)arg0 assetFactory:(id)arg1 ;


@end


#endif