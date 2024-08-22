// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TEXTRESULTS_H
#define TEXTRESULTS_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface TextResults : NSObject

@property (readonly) NSUInteger colCount;
@property (retain, nonatomic) NSArray *cols; // ivar: _cols
@property (retain, nonatomic) NSMutableArray *mutableCols; // ivar: _mutableCols


-(id)init;
-(id)transcriptionOfPath:(id)arg0 tokenProcessingBlock:(id)arg1 ;
-(void)addColumn:(id)arg0 ;
-(void)sortCols;


@end


#endif