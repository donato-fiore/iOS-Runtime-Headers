// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCODEC_H
#define PLCODEC_H


#import <Foundation/Foundation.h>


@interface PLCodec : NSObject



+(BOOL)isPlayaleFourCharCodeName:(id)arg0 ;
+(id)H264fourCharCode;
+(id)HEVCfourCharCode;
+(unsigned int)_typeCodeFromString:(id)arg0 ;


@end


#endif