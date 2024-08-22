// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EQKITLAYOUTELEMENTARYSTACKCARRYROW_H
#define EQKITLAYOUTELEMENTARYSTACKCARRYROW_H

@class NSString;
@protocol EQKitLayoutElementaryStackRow;


#import "EQKitLayoutElementaryStackDigitRow.h"

@interface EQKitLayoutElementaryStackCarryRow : EQKitLayoutElementaryStackDigitRow <EQKitLayoutElementaryStackRow>

 {
    vector<EQKitTypes::Crossout::Enum, std::allocator<EQKitTypes::Crossout::Enum>> mCrossouts;
}


@property (readonly, nonatomic) NSInteger alignmentShift;
@property (readonly, nonatomic) NSUInteger columnCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger firstColumnIndex;
@property (readonly, nonatomic) CGFloat followingSpace;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL spansStack;
@property (readonly) Class superclass;


-(id)initWithChildren:(id)arg0 decimalPoint:(NSUInteger)arg1 position:(NSInteger)arg2 followingSpace:(CGFloat)arg3 crossouts:(*void)arg4 ;
-(int)crossoutAtColumnIndex:(NSUInteger)arg0 ;
-(void)populateMaxColumnWidths:(struct __wrap_iter<double *> )arg0 ;


@end


#endif