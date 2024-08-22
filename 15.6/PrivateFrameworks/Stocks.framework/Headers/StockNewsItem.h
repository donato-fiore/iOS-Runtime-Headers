// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STOCKNEWSITEM_H
#define STOCKNEWSITEM_H

@class NSString, NSDate, NSURL;

#import <Foundation/Foundation.h>


@interface StockNewsItem : NSObject {
    NSString *_localizedDateString;
}


@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSString *headline; // ivar: _headline
@property (retain, nonatomic) NSURL *link; // ivar: _link
@property (readonly, retain, nonatomic) NSString *localizedDateString;
@property (retain, nonatomic) NSString *source; // ivar: _source
@property (retain, nonatomic) NSString *summary; // ivar: _summary


+(id)localizedStringForDate:(id)arg0 ;
-(NSInteger)chronologicalComparisonWithNewsItem:(id)arg0 ;
-(id)archiveDictionary;
-(id)description;
-(id)initWithArchiveDictionary:(id)arg0 ;
-(void)resetLocale;


@end


#endif