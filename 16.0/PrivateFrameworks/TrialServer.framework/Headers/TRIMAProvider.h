// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIMAPROVIDER_H
#define TRIMAPROVIDER_H

@protocol TRIMAProviding;

#import <Foundation/Foundation.h>


@interface TRIMAProvider : NSObject <TRIMAProviding>





-(id)downloadAssets:(id)arg0 attribution:(id)arg1 aggregateProgress:(id)arg2 group:(id)arg3 completion:(id)arg4 ;
-(id)installedAssetsMatchingFullAssetIds:(id)arg0 ;


@end


#endif