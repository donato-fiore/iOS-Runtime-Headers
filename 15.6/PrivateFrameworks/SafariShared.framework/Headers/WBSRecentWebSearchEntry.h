// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSRECENTWEBSEARCHENTRY_H
#define WBSRECENTWEBSEARCHENTRY_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface WBSRecentWebSearchEntry : NSObject

@property (readonly) NSDate *date; // ivar: _date
@property (readonly) NSString *searchString; // ivar: _searchString


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithSearchString:(id)arg0 ;
-(id)initWithSearchString:(id)arg0 date:(id)arg1 ;


@end


#endif