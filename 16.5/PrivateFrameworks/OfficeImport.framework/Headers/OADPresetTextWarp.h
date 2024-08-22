// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADPRESETTEXTWARP_H
#define OADPRESETTEXTWARP_H



#import "OADTextWarp.h"

@interface OADPresetTextWarp : OADTextWarp {
    unsigned char mPresetTextWarpType;
}




+(id)stringWithPresetTextWarpType:(unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(unsigned char)presetTextWarpType;
-(void)setPresetTextWarpType:(unsigned char)arg0 ;


@end


#endif