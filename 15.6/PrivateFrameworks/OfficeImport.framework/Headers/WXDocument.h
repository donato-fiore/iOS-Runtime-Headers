// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WXDOCUMENT_H
#define WXDOCUMENT_H


#import <Foundation/Foundation.h>


@interface WXDocument : NSObject



+(id)documentFrom:(id)arg0 reader:(id)arg1 cancel:(id)arg2 asThumbnail:(BOOL)arg3 ;
+(id)notePositionEnumMap;
+(id)noteRestartEnumMap;
+(void)readDocument:(id)arg0 to:(id)arg1 state:(id)arg2 ;
+(void)readDocumentSettings:(id)arg0 to:(id)arg1 state:(id)arg2 ;
+(void)readFontTable:(id)arg0 to:(id)arg1 state:(id)arg2 ;
+(void)readLists:(id)arg0 to:(id)arg1 state:(id)arg2 ;
+(void)readSources:(id)arg0 to:(id)arg1 state:(id)arg2 ;
+(void)readStyles:(id)arg0 to:(id)arg1 state:(id)arg2 ;


@end


#endif