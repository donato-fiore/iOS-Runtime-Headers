// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTSASSETSERVER_H
#define TTSASSETSERVER_H



#import "TTSStringEnum.h"

@interface TTSAssetServer : TTSStringEnum



+(id)livability;
+(id)production;
+(id)staging;
-(BOOL)isEqual:(id)arg0 ;


@end


#endif