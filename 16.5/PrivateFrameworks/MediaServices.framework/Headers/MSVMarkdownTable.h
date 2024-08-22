// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVMARKDOWNTABLE_H
#define MSVMARKDOWNTABLE_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface MSVMarkdownTable : NSObject {
    NSMutableArray *_columnHeaders;
    NSMutableArray *_columnAlignments;
    NSMutableArray *_rows;
}


@property (readonly, copy, nonatomic) NSArray *columnHeaders;
@property (readonly, copy, nonatomic) NSArray *rows;


+(id)escapedString:(id)arg0 ;
-(NSInteger)alignmentForColumnAtIndex:(NSInteger)arg0 ;
-(id)_formatString:(id)arg0 withWidth:(NSInteger)arg1 alignment:(NSInteger)arg2 ;
-(id)cellAtColumn:(NSInteger)arg0 row:(NSInteger)arg1 ;
-(id)init;
-(id)renderMarkdownWithOptions:(NSUInteger)arg0 ;
-(void)addColumnWithHeader:(id)arg0 ;
-(void)addRow:(id)arg0 ;
-(void)insertColumnWithHeader:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)insertRow:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)removeColumnAtIndex:(NSInteger)arg0 ;
-(void)removeRowAtIndex:(NSInteger)arg0 ;
-(void)setAlignment:(NSInteger)arg0 forColumnAtIndex:(NSInteger)arg1 ;
-(void)setCell:(id)arg0 atColumn:(NSInteger)arg1 row:(NSInteger)arg2 ;


@end


#endif