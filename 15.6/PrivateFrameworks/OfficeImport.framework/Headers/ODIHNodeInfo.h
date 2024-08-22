// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ODIHNODEINFO_H
#define ODIHNODEINFO_H


#import <Foundation/Foundation.h>


@interface ODIHNodeInfo : NSObject {
    int mTreeDepth;
    int mRow;
    ODIHRange mXRange;
    BOOL mConnectToVerticalSide;
    int mExtraRowsBetweenParentAndSelf;
    float mXOffsetRelativeToParent;
    *void mXRanges;
}




-(*void)xRanges;
-(BOOL)connectToVerticalSide;
-(float)xOffsetRelativeToParent;
-(id)init;
-(int)extraRowsBetweenParentAndSelf;
-(int)row;
-(int)treeDepth;
-(struct ODIHRange )xRange;
-(void)addToXOffsetRelativeToParent:(float)arg0 ;
-(void)dealloc;
-(void)setConnectToVerticalSide:(BOOL)arg0 ;
-(void)setExtraRowsBetweenParentAndSelf:(int)arg0 ;
-(void)setRow:(int)arg0 ;
-(void)setTreeDepth:(int)arg0 ;
-(void)setXOffsetRelativeToParent:(float)arg0 ;
-(void)setXRange:(struct ODIHRange )arg0 ;


@end


#endif