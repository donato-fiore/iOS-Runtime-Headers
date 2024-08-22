// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFEEDTRANSFORMATIONFILTERITEMRESULT_H
#define FCFEEDTRANSFORMATIONFILTERITEMRESULT_H


#import <Foundation/Foundation.h>


@interface FCFeedTransformationFilterItemResult : NSObject

@property (nonatomic, getter=isFiltered) BOOL filtered; // ivar: _filtered
@property (nonatomic) NSUInteger filteredReasons; // ivar: _filteredReasons
@property (readonly, nonatomic) id *item; // ivar: _item


-(id)initWithItem:(id)arg0 filtered:(BOOL)arg1 filteredReasons:(NSUInteger)arg2 ;


@end


#endif