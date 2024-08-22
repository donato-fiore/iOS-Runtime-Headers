// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSP_HAL_MOCK_H
#define DSP_HAL_MOCK_H


#import <Foundation/Foundation.h>


@interface DSP_HAL_Mock : NSObject



+(BOOL)hasTestHooks;
+(void)setTestHooks:(*void)arg0 ;
-(id)createFactory:(int)arg0 ;


@end


#endif