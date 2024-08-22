// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSECTION_H
#define WBSECTION_H


#import <Foundation/Foundation.h>


@interface WBSection : NSObject



+(void)mapPrinterSettings:(*void)arg0 toSection:(id)arg1 ;
+(void)mapSection:(id)arg0 toSectionProperties:(*void)arg1 ;
+(void)mapSectionProperties:(*void)arg0 toSection:(id)arg1 ;
+(void)readFrom:(id)arg0 textRun:(struct WrdSectionTextRun *)arg1 document:(id)arg2 index:(int)arg3 section:(id)arg4 ;
+(void)readHeaderFrom:(id)arg0 type:(int)arg1 index:(int)arg2 header:(id)arg3 ;


@end


#endif