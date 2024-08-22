// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXNEWMAGAZINECHUNK_H
#define PXNEWMAGAZINECHUNK_H


#import <Foundation/Foundation.h>

#import "PXNewMagazineRectArray.h"

@interface PXNewMagazineChunk : NSObject

@property (readonly, nonatomic) NSUInteger height; // ivar: _height
@property (readonly, nonatomic) NSUInteger numOfRects; // ivar: _numOfRects
@property (readonly, nonatomic) PXNewMagazineRectArray *rectsArray; // ivar: _rectsArray
@property (readonly, nonatomic) NSInteger startIndexOfInputs; // ivar: _startIndexOfInputs
@property (readonly, nonatomic) NSInteger startY; // ivar: _startY


-(id)initWithStartY:(NSInteger)arg0 startIndexOfInputs:(NSInteger)arg1 rectsArray:(id)arg2 ;


@end


#endif