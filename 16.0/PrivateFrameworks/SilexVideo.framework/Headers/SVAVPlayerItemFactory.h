// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVAVPLAYERITEMFACTORY_H
#define SVAVPLAYERITEMFACTORY_H

@class NSArray, NSString;
@protocol SVAVPlayerItemFactory, SVAVURLAssetFactory;

#import <Foundation/Foundation.h>


@interface SVAVPlayerItemFactory : NSObject <SVAVPlayerItemFactory>



@property (readonly, nonatomic) NSObject<SVAVURLAssetFactory> *assetFactory; // ivar: _assetFactory
@property (readonly, copy, nonatomic) NSArray *automaticallyLoadedAssetKeys; // ivar: _automaticallyLoadedAssetKeys
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createPlayerItemWithURL:(id)arg0 ;
-(id)initWithAutomaticallyLoadedAssetKeys:(id)arg0 assetFactory:(id)arg1 ;


@end


#endif