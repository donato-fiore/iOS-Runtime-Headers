// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HABUTTONHAPTICSLOADER_H
#define HABUTTONHAPTICSLOADER_H


#import <Foundation/Foundation.h>


@interface HAButtonHapticsLoader : NSObject

@property (readonly, nonatomic) NSInteger maxNumberOfSlots;
@property (readonly, nonatomic) BOOL serviceAvailable;


+(id)sharedInstance;
-(BOOL)hapticAssetType:(NSInteger)arg0 hasAudio:(*BOOL)arg1 hasHaptic:(*BOOL)arg2 error:(*id)arg3 ;
-(BOOL)loadButtonHapticOfType:(NSInteger)arg0 atSlot:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)loadButtonHapticOfType:(NSInteger)arg0 withParameters:(id)arg1 atSlot:(NSInteger)arg2 error:(*id)arg3 ;
-(float)audioGainForType:(NSInteger)arg0 ;
-(float)defaultDownGainForType:(NSInteger)arg0 ;
-(float)defaultUpGainForType:(NSInteger)arg0 ;
-(float)hapticGainForType:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif