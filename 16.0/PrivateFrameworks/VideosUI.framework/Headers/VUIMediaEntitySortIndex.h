// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIMEDIAENTITYSORTINDEX_H
#define VUIMEDIAENTITYSORTINDEX_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VUIMediaEntitySortIndex : NSObject

@property (nonatomic) NSUInteger count; // ivar: _count
@property (nonatomic) NSUInteger startIndex; // ivar: _startIndex
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)description;
-(id)init;
-(id)initWithTitle:(id)arg0 startIndex:(NSUInteger)arg1 count:(NSUInteger)arg2 ;


@end


#endif