// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UILIBARCHIVEITEM_H
#define _UILIBARCHIVEITEM_H

@class UIArchiveItem;



@interface _UILibArchiveItem : UIArchiveItem

@property (readonly) *ui_archive underlyingArchive; // ivar: _underlyingArchive
@property (readonly) *ui_archive_entry underlyingArchiveEntry; // ivar: _underlyingArchiveEntry


+(id)itemByReadingAttributesFromUnderlyingArchiveEntry:(struct ui_archive_entry *)arg0 archive:(struct ui_archive *)arg1 ;


@end


#endif