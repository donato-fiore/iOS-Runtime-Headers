// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCFINDERBOOKMARKITEM_H
#define BRCFINDERBOOKMARKITEM_H



#import "BRCDocumentItem.h"

@interface BRCFinderBookmarkItem : BRCDocumentItem



-(BOOL)isFinderBookmark;
-(BOOL)isShareableItem;
-(id)asFinderBookmark;
-(id)asShareableItem;
-(id)baseContentsRecord;
-(id)contentsRecordID;


@end


#endif