// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNSLIDENUMBERATTACHMENT_H
#define KNSLIDENUMBERATTACHMENT_H

@class TSWPPageNumberAttachment;



@interface KNSlideNumberAttachment : TSWPPageNumberAttachment



+(*void)textualAttachmentArchiveFromUnarchiver:(id)arg0 ;
+(Class)classForUnarchiver:(id)arg0 ;
-(*void)textualAttachmentArchiveFromUnarchiver:(id)arg0 ;
-(BOOL)shouldArchiveStringEquivalent;
-(id)stringWithPageNumber:(NSUInteger)arg0 pageCount:(NSUInteger)arg1 charIndex:(NSUInteger)arg2 ;


@end


#endif