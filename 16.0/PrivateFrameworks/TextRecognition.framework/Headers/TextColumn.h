// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TEXTCOLUMN_H
#define TEXTCOLUMN_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface TextColumn : NSObject

@property (retain, nonatomic) NSMutableArray *mutableRows; // ivar: _mutableRows
@property (readonly) NSUInteger rowCount;
@property (readonly, retain, nonatomic) NSArray *rows;


-(id)init;
-(id)initWithRows:(id)arg0 ;
-(void)addRow:(id)arg0 ;
-(void)sortRowsInAscendingOrder;


@end


#endif