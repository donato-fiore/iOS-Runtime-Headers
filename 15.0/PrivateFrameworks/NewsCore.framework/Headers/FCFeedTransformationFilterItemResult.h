// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCFEEDTRANSFORMATIONFILTERITEMRESULT_H
#define FCFEEDTRANSFORMATIONFILTERITEMRESULT_H


#import <Foundation/Foundation.h>


@interface FCFeedTransformationFilterItemResult : NSObject

@property (nonatomic, getter=isFiltered) BOOL filtered; // ivar: _filtered
@property (nonatomic) NSInteger filteredReasons; // ivar: _filteredReasons
@property (readonly, nonatomic) id *item; // ivar: _item


-(id)initWithItem:(id)arg0 filtered:(BOOL)arg1 filteredReasons:(NSInteger)arg2 ;


@end


#endif