// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EQKITLAYOUTELEMENTARYSTACKDIGITROW_H
#define EQKITLAYOUTELEMENTARYSTACKDIGITROW_H

@class NSArray, NSString;
@protocol EQKitLayoutElementaryStackRow;

#import <Foundation/Foundation.h>


@interface EQKitLayoutElementaryStackDigitRow : NSObject <EQKitLayoutElementaryStackRow>

 {
    NSArray *mColumnBoxes;
}


@property (readonly, nonatomic) NSInteger alignmentShift; // ivar: mAlignmentShift
@property (readonly, nonatomic) NSUInteger columnCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger firstColumnIndex; // ivar: mFirstColumnIndex
@property (readonly, nonatomic) CGFloat followingSpace; // ivar: mFollowingSpace
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL spansStack;
@property (readonly) Class superclass;


-(id)initWithChildren:(id)arg0 decimalPoint:(NSUInteger)arg1 position:(NSInteger)arg2 followingSpace:(CGFloat)arg3 ;
-(id)newBoxWithStackWidth:(CGFloat)arg0 columnWidthIter:(struct __wrap_iter<double *> )arg1 iterMax:(struct __wrap_iter<double *> )arg2 previousRow:(id)arg3 layoutManager:(*void)arg4 ;
-(id)p_crossoutDigitBox:(id)arg0 crossout:(int)arg1 layoutManager:(*void)arg2 ;
-(void)dealloc;
-(void)populateMaxColumnWidths:(struct __wrap_iter<double *> )arg0 ;


@end


#endif