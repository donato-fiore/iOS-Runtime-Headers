// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EBHYPERLINK_H
#define EBHYPERLINK_H


#import <Foundation/Foundation.h>


@interface EBHyperlink : NSObject



+(id)edHyperlinkFromXlHLink:(struct XlHLink *)arg0 edResources:(id)arg1 ;
+(int)edTypeFromXlHyperlinkType:(int)arg0 ;
+(int)xlTypeFromEDHyperlinkType:(int)arg0 ;
+(void)addToolTip:(struct XlHLinkToolTip *)arg0 toEdHyperLink:(id)arg1 edResources:(id)arg2 ;


@end


#endif