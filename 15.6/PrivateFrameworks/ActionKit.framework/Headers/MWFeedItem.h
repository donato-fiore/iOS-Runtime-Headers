// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MWFEEDITEM_H
#define MWFEEDITEM_H

@class NSString, NSDate, NSArray;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface MWFeedItem : NSObject <NSCoding>



@property (copy, nonatomic) NSString *author; // ivar: author
@property (copy, nonatomic) NSString *content; // ivar: content
@property (copy, nonatomic) NSDate *date; // ivar: date
@property (copy, nonatomic) NSArray *enclosures; // ivar: enclosures
@property (copy, nonatomic) NSString *identifier; // ivar: identifier
@property (copy, nonatomic) NSString *link; // ivar: link
@property (copy, nonatomic) NSString *summary; // ivar: summary
@property (copy, nonatomic) NSString *title; // ivar: title
@property (copy, nonatomic) NSDate *updated; // ivar: updated


-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif