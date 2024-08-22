// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAGNIFIERMODELSMANAGER_H
#define MAGNIFIERMODELSMANAGER_H

@class NSURL, NSDictionary;
@protocol MagnifierAssetsManagerDelegate;

#import <Foundation/Foundation.h>

#import "MagnifierAssetsManager.h"

@interface MagnifierModelsManager : NSObject <MagnifierAssetsManagerDelegate>

 {
    NSURL *_doorAttributesClassiferUncompiledModelPath;
    NSDictionary *_doorAttributesClassifierAssetProperties;
    NSURL *_signDetectorUncompiledModelPath;
    NSDictionary *_signDetectorAssetProperties;
}


@property (readonly, nonatomic) NSURL *doorAttributesClassifierModelPath;
@property (readonly, nonatomic) NSDictionary *doorAttributesClassifierProperties;
@property (retain, nonatomic) MagnifierAssetsManager *downloadManager; // ivar: _downloadManager
@property (readonly, nonatomic) NSURL *signDetectorModelPath;
@property (readonly, nonatomic) NSDictionary *signDetectorProperties;


+(id)shared;
-(id)init;
-(void)updateAssetURLs;


@end


#endif