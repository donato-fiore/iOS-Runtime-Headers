// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPTABS_H
#define TSWPTABS_H

@class NSMutableArray;
@protocol TSSPropertyValueArchiving, NSCopying, NSFastEnumeration, TSDMixing;

#import <Foundation/Foundation.h>


@interface TSWPTabs : NSObject <TSSPropertyValueArchiving, NSCopying, NSFastEnumeration, TSDMixing>

 {
    NSMutableArray *_tabs;
}




+(id)instanceWithArchive:(struct Message *)arg0 unarchiver:(id)arg1 ;
+(id)tabs;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(NSUInteger)indexForTabWithPosition:(CGFloat)arg0 alignment:(int)arg1 leader:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithTabs:(id)arg0 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)tabAfterPosition:(CGFloat)arg0 ;
-(id)tabAtIndex:(NSUInteger)arg0 ;
-(id)tabAtPosition:(CGFloat)arg0 ;
-(void)insertTab:(id)arg0 ;
-(void)removeTabAtIndex:(NSUInteger)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)setPosition:(CGFloat)arg0 forTab:(id)arg1 ;


@end


#endif