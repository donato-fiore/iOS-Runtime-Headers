// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCKPADDING_H
#define IMCKPADDING_H


#import <Foundation/Foundation.h>


@interface IMCKPadding : NSObject



+(NSInteger)_paddingForType:(int)arg0 originalSize:(NSInteger)arg1 error:(struct __CFError **)arg2 ;
+(id)_randomDataWithLength:(NSInteger)arg0 ;
+(id)paddingForMessageOfSize:(NSInteger)arg0 ;


@end


#endif