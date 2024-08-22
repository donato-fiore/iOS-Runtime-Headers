// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDSCANNERSERVICE_H
#define DDSCANNERSERVICE_H


#import <Foundation/Foundation.h>


@interface DDScannerService : NSObject



+(NSInteger)scanQuery:(struct __DDScanQuery *)arg0 configuration:(id)arg1 completionBlock:(id)arg2 ;
+(NSInteger)scanString:(id)arg0 completionBlock:(id)arg1 ;
+(NSInteger)scanString:(id)arg0 range:(struct _NSRange )arg1 configuration:(id)arg2 completionBlock:(id)arg3 ;
+(id)scanQuery:(struct __DDScanQuery *)arg0 configuration:(id)arg1 ;
+(id)scanString:(id)arg0 ;
+(id)scanString:(id)arg0 range:(struct _NSRange )arg1 configuration:(id)arg2 ;
+(void)appendWatchOSLinksToString:(id)arg0 ;
+(void)cancelJob:(NSInteger)arg0 ;


@end


#endif