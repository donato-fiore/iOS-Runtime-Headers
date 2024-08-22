// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXTAPTICCHIMEASSET_H
#define AXTAPTICCHIMEASSET_H

@class NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface AXTapticChimeAsset : NSObject

@property (readonly, nonatomic) NSString *audioFilePath; // ivar: _audioFilePath
@property (readonly, nonatomic) NSArray *hapticAtomEntries;
@property (readonly, nonatomic) NSDictionary *hapticDictionary; // ivar: _hapticDictionary
@property (readonly, nonatomic) CGFloat prePlayTimeInterval; // ivar: _prePlayTimeInterval
@property (readonly, nonatomic) float volume; // ivar: _volume


+(id)_assetPathForChimeSoundType:(NSInteger)arg0 fileName:(id)arg1 ;
+(id)hourAssetForType:(NSInteger)arg0 hour:(NSUInteger)arg1 ;
+(id)quarterHourAssetForType:(NSInteger)arg0 ;
-(id)_initWithChimeSoundType:(NSInteger)arg0 audioFilePath:(id)arg1 hapticsFilePath:(id)arg2 ;
-(id)description;
-(unsigned int)createSystemSoundIDForStartTime:(CGFloat)arg0 ;


@end


#endif