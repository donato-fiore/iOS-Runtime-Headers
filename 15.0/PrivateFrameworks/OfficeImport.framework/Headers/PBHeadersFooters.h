// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PBHEADERSFOOTERS_H
#define PBHEADERSFOOTERS_H


#import <Foundation/Foundation.h>


@interface PBHeadersFooters : NSObject



+(id)headersFootersContainerWithSlideContainer:(id)arg0 state:(id)arg1 ;
+(struct PptHeadersFootersAtom *)headersFootersAtomWithHeadersFootersContainer:(id)arg0 ;
+(void)addCopyOfHeaderFooterPlaceholderOfType:(int)arg0 toDrawables:(id)arg1 slideBase:(id)arg2 headersFootersContainer:(id)arg3 state:(id)arg4 ;
+(void)readHeaderFooterTextFromHeadersFootersContainer:(id)arg0 toPlaceholderShape:(id)arg1 ;
+(void)readHeadersFootersFromSlideContainer:(id)arg0 toMasterSlide:(id)arg1 drawables:(id)arg2 state:(id)arg3 ;
+(void)readHeadersFootersFromSlideContainer:(id)arg0 toSlide:(id)arg1 drawables:(id)arg2 state:(id)arg3 ;
+(void)readHeadersFootersToSlideLayout:(id)arg0 drawables:(id)arg1 state:(id)arg2 ;


@end


#endif