// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADTABLEROW_H
#define OADTABLEROW_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface OADTableRow : NSObject {
    NSMutableArray *mCells;
    float mHeight;
}




-(NSUInteger)cellCount;
-(float)height;
-(id)addCell;
-(id)cellAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(void)flipCellsRTL;
-(void)setHeight:(float)arg0 ;


@end


#endif