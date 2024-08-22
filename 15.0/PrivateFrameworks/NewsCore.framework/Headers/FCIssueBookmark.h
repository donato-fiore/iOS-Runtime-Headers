// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCISSUEBOOKMARK_H
#define FCISSUEBOOKMARK_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCIssueBookmark : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *articleID; // ivar: _articleID
@property (readonly, nonatomic) NSInteger issueType; // ivar: _issueType
@property (readonly, copy, nonatomic) NSString *pageID; // ivar: _pageID


+(id)ANFBookmarkWithArticleID:(id)arg0 ;
+(id)PDFBookmarkWithPageID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIssueType:(NSInteger)arg0 articleID:(id)arg1 pageID:(id)arg2 ;


@end


#endif