// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOMIX_H
#define AVAUDIOMIX_H

@class NSArray;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "AVAudioMixInternal.h"

@interface AVAudioMix : NSObject <NSCopying, NSMutableCopying>

 {
    AVAudioMixInternal *_audioMix;
}


@property (readonly, copy, nonatomic) NSArray *inputParameters;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)audioMixInputParametersForTrackID:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif