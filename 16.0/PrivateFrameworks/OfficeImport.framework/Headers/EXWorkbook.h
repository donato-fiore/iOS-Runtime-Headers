// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXWORKBOOK_H
#define EXWORKBOOK_H


#import <Foundation/Foundation.h>


@interface EXWorkbook : NSObject



+(?)readSheetsFrom:(?)arg0 relationNS:(?)arg1 state:(?)arg2 delegateforThumbnail;
+(id)edWorkbookFromState:(id)arg0 package:(id)arg1 reader:(id)arg2 fileName:(id)arg3 temporaryDirectory:(id)arg4 delegate:(id)arg5 forThumbnail:(BOOL)arg6 ;
+(id)edWorkbookFromState:(id)arg0 package:(id)arg1 reader:(id)arg2 resourcesOnly:(BOOL)arg3 fileName:(id)arg4 temporaryDirectory:(id)arg5 delegate:(id)arg6 forThumbnail:(BOOL)arg7 ;
+(void)readStringsFrom:(id)arg0 state:(id)arg1 ;
+(void)readStylesFrom:(id)arg0 state:(id)arg1 ;
+(void)setDefaultParagraphProperties:(id)arg0 ;
+(void)setupDefaultTextStyleWithState:(id)arg0 ;
+(void)setupProcessors:(id)arg0 ;


@end


#endif