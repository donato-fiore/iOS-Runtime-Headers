// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBPRESENTATION_H
#define PBPRESENTATION_H


#import <Foundation/Foundation.h>


@interface PBPresentation : NSObject



+(id)drawingGroupHolderWithDocumentContainerHolder:(id)arg0 ;
+(void)addHeadersFootersToDocumentContainer:(id)arg0 instance:(int)arg1 ;
+(void)processLayoutTypesFromDocument:(id)arg0 masterLayoutMap:(id)arg1 state:(id)arg2 ;
+(void)readCommentAuthorsFrom:(id)arg0 state:(id)arg1 ;
+(void)readDefaultTextListStyle:(id)arg0 fromDocumentContainer:(id)arg1 state:(id)arg2 ;
+(void)readFrom:(*void)arg0 to:(id)arg1 cancel:(id)arg2 asThumbnail:(BOOL)arg3 delegate:(id)arg4 ;
+(void)readMasterAndLayouts:(id)arg0 masterLayoutMap:(id)arg1 state:(id)arg2 ;
+(void)readNotes:(id)arg0 masterLayoutMap:(id)arg1 slideIdMap:(id)arg2 state:(id)arg3 delegate:(id)arg4 ;
+(void)readSlideListWithInstance:(int)arg0 documentContainerHolder:(id)arg1 state:(id)arg2 block:(id)arg3 ;
+(void)readSlides:(id)arg0 masterLayoutMap:(id)arg1 slideIdMap:(id)arg2 state:(id)arg3 isThumbnail:(BOOL)arg4 delegate:(id)arg5 ;
+(void)readTextStyleFromNotesMaster:(id)arg0 toNotesMaster:(id)arg1 slideMaster:(id)arg2 state:(id)arg3 ;
+(void)readTextStylesFromSlideMaster:(id)arg0 toSlideMaster:(id)arg1 state:(id)arg2 ;
+(void)readThemeFromSlideMaster:(id)arg0 document:(id)arg1 theme:(id)arg2 colorMap:(id)arg3 state:(id)arg4 ;
+(void)readXmlLayoutsFromSlideMaster:(id)arg0 document:(id)arg1 masterInfo:(id)arg2 state:(id)arg3 ;
+(void)scanSlideListForLayoutTypes:(id)arg0 slideListHolder:(id)arg1 masterLayoutMap:(id)arg2 ;
+(void)setDefaultTextStyleWithEnvironmentHolder:(id)arg0 state:(id)arg1 ;
+(void)setFontEntites:(id)arg0 environmentHolder:(id)arg1 ;


@end


#endif