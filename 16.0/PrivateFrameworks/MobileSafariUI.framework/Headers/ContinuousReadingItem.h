// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CONTINUOUSREADINGITEM_H
#define CONTINUOUSREADINGITEM_H

@class NSURL, NSString, WebBookmark;

#import <Foundation/Foundation.h>


@interface ContinuousReadingItem : NSObject

@property (readonly, retain, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *previewText;
@property (retain, nonatomic, setter=_setReadingListBookmark:) WebBookmark *readingListBookmark; // ivar: _readingListBookmark
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *title;


+(id)itemWithReadingListItem:(id)arg0 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithReadingListItem:(id)arg0 ;
-(id)_siteNameForReadingListItem;
-(void)_readingListItemDidUpdate:(id)arg0 ;
-(void)dealloc;


@end


#endif