// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STOCKNEWSITEMCOLLECTION_H
#define STOCKNEWSITEMCOLLECTION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface StockNewsItemCollection : NSObject

@property (nonatomic) CGFloat expirationTime; // ivar: _expirationTime
@property (retain, nonatomic) NSArray *newsItems; // ivar: _newsItems


-(id)archiveArray;
-(id)initWithArchiveArray:(id)arg0 ;


@end


#endif