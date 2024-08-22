// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKUPNEXTITEMCOLLECTION_H
#define WLKUPNEXTITEMCOLLECTION_H

@class NSArray, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface WLKUpNextItemCollection : NSObject

@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (readonly, copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)description;
-(id)initWithDictionary:(id)arg0 context:(id)arg1 ;


@end


#endif