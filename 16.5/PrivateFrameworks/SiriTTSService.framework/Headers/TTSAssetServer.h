// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSASSETSERVER_H
#define TTSASSETSERVER_H



#import "TTSStringEnum.h"

@interface TTSAssetServer : TTSStringEnum

@property (nonatomic, readonly) NSInteger hash;


+(id)livability;
+(id)production;
+(id)staging;
-(BOOL)isEqual:(id)arg0 ;


@end


#endif