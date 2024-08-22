// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBWATCH10KEYLAYOUT_H
#define UIKBWATCH10KEYLAYOUT_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface UIKBWatch10KeyLayout : NSObject {
    CGRect _frame;
    NSArray *_leftControlKeyFrames;
    NSArray *_rightControlKeyFrames;
    NSMutableArray *_gridKeyFrames;
}


@property (nonatomic) CGFloat controlKeyWidthRatio; // ivar: _controlKeyWidthRatio
@property (nonatomic) NSInteger gridColumns; // ivar: _gridColumns
@property (nonatomic) NSInteger gridRows; // ivar: _gridRows
@property (nonatomic) NSInteger leftControlKeys; // ivar: _leftControlKeys
@property (nonatomic) UIEdgeInsets leftControlKeysInsets; // ivar: _leftControlKeysInsets
@property (nonatomic) NSInteger rightControlKeys; // ivar: _rightControlKeys
@property (nonatomic) UIEdgeInsets rightControlKeysInsets; // ivar: _rightControlKeysInsets


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)layoutControlKeys:(NSInteger)arg0 in:(struct CGRect )arg1 ;
-(struct CGRect )frameForGridKeyAt:(NSInteger)arg0 inRow:(NSInteger)arg1 ;
-(struct CGRect )frameForLeftControlKeyAt:(NSInteger)arg0 ;
-(struct CGRect )frameForRightControlKeyAt:(NSInteger)arg0 ;
-(void)layout;


@end


#endif