// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPTABS_H
#define TSWPTABS_H

@class NSMutableArray;
@protocol NSCopying, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface TSWPTabs : NSObject <NSCopying, NSFastEnumeration>

 {
    NSMutableArray *_tabs;
}




+(id)tabs;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)indexForTabWithPosition:(CGFloat)arg0 alignment:(int)arg1 leader:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithTabs:(id)arg0 ;
-(id)tabAfterPosition:(CGFloat)arg0 ;
-(id)tabAtIndex:(NSUInteger)arg0 ;
-(id)tabAtPosition:(CGFloat)arg0 ;
-(void)dealloc;
-(void)insertTab:(id)arg0 ;
-(void)removeTabAtIndex:(NSUInteger)arg0 ;
-(void)setPosition:(CGFloat)arg0 forTab:(id)arg1 ;


@end


#endif