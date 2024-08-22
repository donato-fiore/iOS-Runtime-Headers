// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDBOOKMARK_H
#define WDBOOKMARK_H

@class NSString;


#import "WDRun.h"

@interface WDBookmark : WDRun {
    NSString *mName;
    int mBookmarkType;
}




-(id)description;
-(id)initWithParagraph:(id)arg0 name:(id)arg1 type:(int)arg2 ;
-(id)name;
-(int)bookmarkType;
-(int)runType;
-(void)setBookmarkType:(int)arg0 ;
-(void)setName:(id)arg0 ;


@end


#endif