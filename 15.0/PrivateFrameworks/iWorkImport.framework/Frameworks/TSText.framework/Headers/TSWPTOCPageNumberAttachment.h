// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPTOCPAGENUMBERATTACHMENT_H
#define TSWPTOCPAGENUMBERATTACHMENT_H

@class NSString;


#import "TSWPPageNumberAttachment.h"

@interface TSWPTOCPageNumberAttachment : TSWPPageNumberAttachment {
    NSString *_pageNumber;
    NSString *_bookmarkName;
}


@property (copy, nonatomic) NSString *bookmarkName;
@property (copy, nonatomic) NSString *pageNumber;


-(id)stringEquivalent;
-(id)stringWithPageNumber:(NSUInteger)arg0 pageCount:(NSUInteger)arg1 charIndex:(NSUInteger)arg2 ;
-(unsigned int)elementKind;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif