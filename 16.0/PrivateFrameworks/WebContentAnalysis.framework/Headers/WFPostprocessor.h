// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPOSTPROCESSOR_H
#define WFPOSTPROCESSOR_H


#import <Foundation/Foundation.h>


@interface WFPostprocessor : NSObject



+(id)adultWebSiteTagging:(id)arg0 ;
+(id)lightweightStripHTMLTags:(id)arg0 ;
+(id)lightweightStripHTMLTagsForLine:(id)arg0 ;
+(id)normalizeStrippedHTML:(id)arg0 ;
+(id)postprocessPlainTextWebPage:(id)arg0 ;
+(struct _NSRange )rangeOfFirstHTMLTag:(id)arg0 searchRange:(struct _NSRange )arg1 ;


@end


#endif