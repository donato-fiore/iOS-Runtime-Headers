// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADSTYLEMATRIX_H
#define OADSTYLEMATRIX_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface OADStyleMatrix : NSObject {
    NSMutableArray *mFills;
    NSMutableArray *mStrokes;
    NSMutableArray *mEffects;
    NSMutableArray *mBgFills;
}


@property (copy, nonatomic) NSString *name; // ivar: mName


+(id)objectInArray:(id)arg0 withPossiblyOutOfRangeIndex:(NSUInteger)arg1 defaultValue:(id)arg2 ;
-(BOOL)isEmpty;
-(NSUInteger)bgFillCount;
-(NSUInteger)effectsCount;
-(NSUInteger)fillCount;
-(NSUInteger)strokeCount;
-(id)bgFillAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)effectsAtIndex:(NSUInteger)arg0 ;
-(id)effectsAtIndex:(NSUInteger)arg0 color:(id)arg1 ;
-(id)fillAtIndex:(NSUInteger)arg0 ;
-(id)fillAtIndex:(NSUInteger)arg0 color:(id)arg1 ;
-(id)init;
-(id)strokeAtIndex:(NSUInteger)arg0 ;
-(id)strokeAtIndex:(NSUInteger)arg0 color:(id)arg1 ;
-(void)addBgFill:(id)arg0 ;
-(void)addEffects:(id)arg0 ;
-(void)addFill:(id)arg0 ;
-(void)addStroke:(id)arg0 ;
-(void)padArray:(id)arg0 withContentsOfArray:(id)arg1 ;
-(void)validateStyleMatrix;


@end


#endif