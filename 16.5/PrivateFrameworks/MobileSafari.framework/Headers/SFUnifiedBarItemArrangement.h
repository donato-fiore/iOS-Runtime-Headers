// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUNIFIEDBARITEMARRANGEMENT_H
#define SFUNIFIEDBARITEMARRANGEMENT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SFUnifiedBarItemArrangement : NSObject

@property (readonly, nonatomic) BOOL allowsCenteringInlineContentView;
@property (readonly, copy, nonatomic) NSArray *leadingItems; // ivar: _leadingItems
@property (readonly, copy, nonatomic) NSArray *trailingItems; // ivar: _trailingItems


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithLeadingItems:(id)arg0 trailingItems:(id)arg1 ;
-(void)enumerateAllItemsUsingBlock:(id)arg0 ;


@end


#endif