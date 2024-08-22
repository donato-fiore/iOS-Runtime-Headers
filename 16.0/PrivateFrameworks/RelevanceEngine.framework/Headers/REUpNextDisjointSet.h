// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REUPNEXTDISJOINTSET_H
#define REUPNEXTDISJOINTSET_H

@class NSMapTable;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface REUpNextDisjointSet : NSObject <NSCopying>

 {
    NSMapTable *_nodes;
}


@property (readonly, nonatomic) NSUInteger count;


-(BOOL)containsItem:(id)arg0 ;
-(BOOL)isItem:(id)arg0 connectedToItem:(id)arg1 ;
-(id)allItemsConnectedToItem:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)addItem:(id)arg0 ;
-(void)connectItem:(id)arg0 withItem:(id)arg1 ;
-(void)dealloc;
-(void)removeItem:(id)arg0 ;


@end


#endif