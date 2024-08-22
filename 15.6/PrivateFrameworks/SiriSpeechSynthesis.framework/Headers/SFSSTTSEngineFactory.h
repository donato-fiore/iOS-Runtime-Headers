// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSSTTSENGINEFACTORY_H
#define SFSSTTSENGINEFACTORY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SFSSTTSEngineFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *keyToTTSEngineMap; // ivar: _keyToTTSEngineMap


+(id)getKeyByVoiceAsset:(id)arg0 resourceAsset:(id)arg1 ;
+(id)sharedInstance;
-(id)getEngineByVoiceAsset:(id)arg0 resourceAsset:(id)arg1 ;
-(id)init;
-(void)removeAllEngines;
-(void)removeEngineByVoiceAsset:(id)arg0 resourceAsset:(id)arg1 ;


@end


#endif