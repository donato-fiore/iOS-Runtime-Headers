// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHMULTILOCALERESULTPROCESSOR_H
#define CHMULTILOCALERESULTPROCESSOR_H


#import <Foundation/Foundation.h>


@interface CHMultiLocaleResultProcessor : NSObject



// +(id)combineMultiLocaleResults:(id)arg0 locales:(id)arg1 topLocaleIndex:(NSInteger)arg2 mergedResultPostprocessingBlock:(id)arg3 changeableColumnCountBlock:(unk)arg4  ;
+(id)swapMultiLocaleResults:(id)arg0 locales:(id)arg1 topLocaleIndex:(NSInteger)arg2 resultHasSwap:(*BOOL)arg3 resultTopLocale:(*id)arg4 ;
+(void)updateMultiLocaleResultDictionary:(id)arg0 locales:(id)arg1 ;


@end


#endif