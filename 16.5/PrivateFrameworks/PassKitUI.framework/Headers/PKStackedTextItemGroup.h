// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSTACKEDTEXTITEMGROUP_H
#define PKSTACKEDTEXTITEMGROUP_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PKStackedTextItemGroup : NSObject

@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithItems:(id)arg0 ;


@end


#endif