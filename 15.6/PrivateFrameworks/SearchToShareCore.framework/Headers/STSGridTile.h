// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSGRIDTILE_H
#define STSGRIDTILE_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface STSGridTile : NSObject

@property (retain, nonatomic) NSNumber *largeIndex; // ivar: _largeIndex
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (copy, nonatomic) NSArray *smallIndexes; // ivar: _smallIndexes


-(id)description;


@end


#endif