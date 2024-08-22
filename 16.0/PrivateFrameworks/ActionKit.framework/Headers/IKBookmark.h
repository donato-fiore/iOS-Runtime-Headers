// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKBOOKMARK_H
#define IKBOOKMARK_H

@class NSURL, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface IKBookmark : NSObject

@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) NSInteger bookmarkID; // ivar: _bookmarkID
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (copy, nonatomic) NSString *descr; // ivar: _descr
@property (copy, nonatomic) NSString *hashString; // ivar: _hashString
@property (copy, nonatomic) NSString *privateSource; // ivar: _privateSource
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (retain, nonatomic) NSDate *progressDate; // ivar: _progressDate
@property (nonatomic, getter=isStarred) BOOL starred; // ivar: _starred
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)bookmarkWithBookmarkID:(NSInteger)arg0 ;
-(id)init;
-(id)initWithBookmarkID:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif